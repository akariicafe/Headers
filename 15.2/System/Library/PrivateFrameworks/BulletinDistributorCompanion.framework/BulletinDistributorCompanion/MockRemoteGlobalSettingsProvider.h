@class NSString;

@interface MockRemoteGlobalSettingsProvider : NSObject <BLTRemoteGlobalSettingsProvider, BLTRemoteGlobalSettingsSyncServerLocalEndpoint>

@property (nonatomic) long long globalScheduledDeliverySetting;
@property (nonatomic) long long effectiveGlobalScheduledDeliverySetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
