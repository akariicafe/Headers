@interface FMIPCore.FMIPItemImageCacheOperation : NSOperation {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic) BOOL finished;
@property (nonatomic, readonly) BOOL asynchronous;

- (BOOL)isFinished;
- (void)main;
- (BOOL)isAsynchronous;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
