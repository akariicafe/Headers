@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data;

@interface TSPMemoryReadChannel : NSObject <TSUReadChannel> {
    NSObject<OS_dispatch_data> *_dispatchData;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_close;
- (void)close;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNSData:(id)a0;
- (void)addBarrier:(id /* block */)a0;
- (void)readFromOffset:(long long)a0 length:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)readWithHandler:(id /* block */)a0;
- (void)setLowWater:(unsigned long long)a0;
- (id)initWithDispatchData:(id)a0;
- (void)readFromOffsetAndWait:(long long)a0 length:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)readWithHandlerAndWait:(id /* block */)a0;

@end
