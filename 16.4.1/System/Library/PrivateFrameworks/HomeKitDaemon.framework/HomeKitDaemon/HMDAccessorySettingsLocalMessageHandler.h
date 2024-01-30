@class NSUUID, NSString;
@protocol HMDAccessorySettingsLocalMessageHandlerDelegate, HMDLanguageValueListSettingDataProvider, HMDAccessorySettingsLocalMessageHandlerDataSource;

@interface HMDAccessorySettingsLocalMessageHandler : HMFObject <HMFLogging>

@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) id<HMDLanguageValueListSettingDataProvider> languageValuesDataProvider;
@property (weak) id<HMDAccessorySettingsLocalMessageHandlerDataSource> dataSource;
@property (weak) id<HMDAccessorySettingsLocalMessageHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)callerVersionForMessage:(id)a0;
- (unsigned long long)dataSourceCallerPrivilegeWithMessage:(id)a0 error:(id *)a1;
- (void)handleAccessorySettingsFetchRequestMessage:(id)a0;
- (void)handleAccessorySettingsUpdateRequestMessage:(id)a0;
- (id)initWithHomeUUID:(id)a0 languageValuesDataProvider:(id)a1;
- (id)siriAvailableLanguagesSetting;

@end
