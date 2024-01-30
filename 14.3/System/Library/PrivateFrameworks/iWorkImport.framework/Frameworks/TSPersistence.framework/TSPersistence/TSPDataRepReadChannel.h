@class NSString, NSObject, SFUDataRepresentation;
@protocol SFUInputStream, OS_dispatch_queue;

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {
    SFUDataRepresentation *_representation;
    id<SFUInputStream> _inputStream;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRepresentation:(id)a0;
- (void)_close;
- (void)readWithHandler:(id /* block */)a0;
- (void)readWithHandlerAndWait:(id /* block */)a0;

@end
