@class NSSet, NSMutableDictionary;

@interface CKUploadRequestManagerResponseActionThrottler : NSObject

@property (retain, nonatomic) NSMutableDictionary *responseActionToMetadata;
@property double throttlePeriod;
@property long long minimumThrottleCount;
@property double minimumThrottleTime;
@property double maximumThrottleTime;
@property double minimumRetryTime;
@property (copy) NSSet *actionsToThrottle;

+ (void)sleep:(double)a0;
+ (double)currentTime;

- (double)throttleTimeForCount:(long long)a0 isRetry:(BOOL)a1;
- (void)gateResponseAction:(long long)a0 isRetry:(BOOL)a1;
- (id)init;
- (unsigned long long)totalThrottleCountForAction:(long long)a0;
- (void)gateResponseAction:(long long)a0 isRetry:(BOOL)a1 currentTime:(double)a2;
- (void).cxx_destruct;

@end
