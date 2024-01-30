@class NSString, NSObject;
@protocol OS_os_log;

@interface RateLimiter : NSObject {
    unsigned int _style;
    NSString *_name;
    unsigned int _tokenBucketSize;
    double _tokenBucketCfgRefreshInterval;
    double _tokenBucketCfgIntervalBias;
    double _tokenBucketIntervalBias;
    double _tokenBucketInterval;
    double _lastConsumed;
    BOOL _configured;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_os_log> *logHandle;

- (id)getState;
- (BOOL)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_restoreDefaults;
- (void)_restoreTokenBucketDefaults;
- (BOOL)_setTokenBucketConfiguration:(id)a0;
- (void)_setTokenBucketDerivedValues;
- (double)_tokenBucketAcquireHelper:(BOOL)a0;
- (BOOL)_tokenBucketResetWithRelativeStartTime:(double)a0;
- (double)checkAcquire;
- (BOOL)resetWithRelativeStartTime:(double)a0;
- (double)tryAcquire;

@end
