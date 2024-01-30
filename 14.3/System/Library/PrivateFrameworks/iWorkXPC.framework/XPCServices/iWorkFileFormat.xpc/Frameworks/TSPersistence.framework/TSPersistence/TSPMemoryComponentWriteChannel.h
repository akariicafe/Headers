@class NSString, TSUDispatchData, NSObject;
@protocol OS_dispatch_queue;

@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    NSObject<OS_dispatch_queue> *_streamQueue;
    TSUDispatchData *_streamData;
    BOOL _isClosed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (void)_close;
- (id)serializedData;
- (id)initWithAlwaysDefragmentData:(BOOL)a0;

@end
