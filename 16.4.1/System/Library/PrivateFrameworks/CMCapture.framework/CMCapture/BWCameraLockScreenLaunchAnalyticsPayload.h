@class NSString;

@interface BWCameraLockScreenLaunchAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL prewarmed;
@property (nonatomic) BOOL ispStreamingStarted;
@property (nonatomic) int launchError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
