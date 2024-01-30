@class NSString, NSMutableSet;
@protocol HMFLogging;

@interface HMDNotificationRegistration : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSMutableSet *registeredNotifications;
@property (readonly, weak, nonatomic) id<HMFLogging> registerer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
