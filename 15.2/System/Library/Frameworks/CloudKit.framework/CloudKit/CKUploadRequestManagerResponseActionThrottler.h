@class NSSet, NSMutableDictionary;

@interface CKUploadRequestManagerResponseActionThrottler : NSObject

@property (retain, nonatomic) NSMutableDictionary *responseActionToMetadata;
@property (nonatomic) double throttlePeriod;
@property (nonatomic) long long minimumThrottleCount;
@property (nonatomic) double maximumThrottleTime;
@property (nonatomic) double minimumRetryTime;
@property (copy, nonatomic) NSSet *actionsToThrottle;

+ (void)sleep:(double)a0;
+ (double)currentTime;

- (void)gateResponseAction:(long long)a0 isRetry:(BOOL)a1 currentTime:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)gateResponseAction:(long long)a0 isRetry:(BOOL)a1;
- (double)throttleTimeForCount:(long long)a0 isRetry:(BOOL)a1;

@end
