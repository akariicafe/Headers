@interface BRCRetryCounter : NSObject {
    BOOL _scheduled;
}

@property (readonly, nonatomic) unsigned int retryCount;
@property (readonly, nonatomic) long long latestRetry;
@property (readonly, nonatomic) long long throttleHash;

- (void)schedule;
- (void)incrementRetry;
- (id)initWithThrottleHash:(long long)a0;

@end
