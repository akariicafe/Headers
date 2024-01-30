@class HMDAudioAnalysisEventBulletinNotificationRegistration, HMDBulletinNotificationRegistrationSource;

@interface HMDAudioAnalysisEventBulletinNotificationRegistrationRemote : HMFObject

@property (readonly, copy) HMDAudioAnalysisEventBulletinNotificationRegistration *registration;
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithAudioAnalysisEventBulletinNotificationRegistration:(id)a0 source:(id)a1;

@end
