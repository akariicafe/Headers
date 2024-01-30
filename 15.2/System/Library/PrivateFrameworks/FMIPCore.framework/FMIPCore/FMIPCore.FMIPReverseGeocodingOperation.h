@interface FMIPCore.FMIPReverseGeocodingOperation : NSOperation {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic) BOOL finished;
@property (nonatomic, readonly) BOOL asynchronous;

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (void)main;
- (void).cxx_destruct;
- (id)init;

@end
