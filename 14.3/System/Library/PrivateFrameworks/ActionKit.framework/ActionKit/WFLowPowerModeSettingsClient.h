@class _CDBatterySaver, NSString;

@interface WFLowPowerModeSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (readonly, nonatomic) _CDBatterySaver *batterySaver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

@end
