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

- (id)init;
- (void).cxx_destruct;
- (void)gateResponseAction:(long long)a0 isRetry:(BOOL)a1;
- (void)gateResponseAction:(long long)a0 isRetry:(BOOL)a1 currentTime:(double)a2;
- (double)throttleTimeForCount:(long long)a0 isRetry:(BOOL)a1;

@end
