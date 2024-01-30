@interface NanoPhotosCore.AsyncOperation : NSOperation {
    void /* unknown type, empty encoding */ stateQueue;
    void /* unknown type, empty encoding */ _state;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL ready;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;

- (BOOL)isReady;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isAsynchronous;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
