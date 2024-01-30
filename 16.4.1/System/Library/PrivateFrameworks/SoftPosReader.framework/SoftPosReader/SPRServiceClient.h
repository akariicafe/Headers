@class SPRPrimer, NSDate;

@interface SPRServiceClient : SPRObject {
    long long _primerPredicate;
    SPRPrimer *_sharedPrimer;
}

@property (class, readonly, nonatomic) SPRServiceClient *shared;

@property (readonly) NSDate *buildDate;
@property (readonly, nonatomic) SPRPrimer *sharedPrimer;

- (void)invalidate;
- (void).cxx_destruct;
- (void)onDisconnect;
- (BOOL)abortAndReturnError:(id *)a0;
- (void)assertCompatibleBuild;
- (BOOL)jetsamAndReturnError:(id *)a0;
- (id)proxyDescription;

@end
