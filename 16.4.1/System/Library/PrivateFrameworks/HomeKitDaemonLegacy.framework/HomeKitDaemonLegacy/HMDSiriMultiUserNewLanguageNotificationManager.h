@class NSString, HMDSiriMultiUserNewLanguageNotificationManagerContext;

@interface HMDSiriMultiUserNewLanguageNotificationManager : HMFObject <HMFLogging, HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate>

@property (readonly) HMDSiriMultiUserNewLanguageNotificationManagerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_postNotificationIfNecessaryForMediaAccessory:(id)a0;
- (void)checkAllMediaAccessoriesAndPostNotificationIfNecessary;
- (void)mediaAccessory:(id)a0 didUpdateSoftwareToVersion:(id)a1;

@end
