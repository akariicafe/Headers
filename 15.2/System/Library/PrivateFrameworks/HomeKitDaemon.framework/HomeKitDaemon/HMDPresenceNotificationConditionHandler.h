@class HMDHome, NSString;

@interface HMDPresenceNotificationConditionHandler : HMFObject <HMFLogging, HMDNotificationConditionHandler>

@property (readonly, weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
