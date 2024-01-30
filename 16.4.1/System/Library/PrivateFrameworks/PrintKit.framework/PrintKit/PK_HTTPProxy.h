@class NSObject;
@protocol OS_dispatch_queue;

@interface PK_HTTPProxy : _PK_OneShotXPC {
    NSObject<OS_dispatch_queue> *_httpQueue;
    int _msTimeout;
}

@property (readonly) int lastError;

- (void)dealloc;
- (id)initWithTimeout:(int)a0;
- (void)invalidate;
- (void)withProtocolAsync:(id /* block */)a0;
- (void)withProtocolSync:(id /* block */)a0;

@end
