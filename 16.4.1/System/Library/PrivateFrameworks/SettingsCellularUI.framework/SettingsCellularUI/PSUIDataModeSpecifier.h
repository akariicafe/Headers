@class PSListController, NSString, CTXPCServiceSubscriptionContext, CoreTelephonyClient, CTServiceDescriptor;

@interface PSUIDataModeSpecifier : PSSpecifier <Loggable> {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CTServiceDescriptor *_serviceDescriptor;
    CoreTelephonyClient *_ctClient;
    PSListController *_hostController;
}

@property BOOL showDrillDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void).cxx_destruct;
- (id)dataModeFromNumber:(id)a0;
- (id)getDataMode:(id)a0;
- (id)initWithCTClient:(id)a0 hostController:(id)a1 parentSpecifier:(id)a2;
- (id)interfaceCostFromBool:(BOOL)a0;
- (BOOL)isHighDataModeSupported;
- (id)isInterfaceCostExpensive:(id)a0;
- (id)isLowDataModeEnabled:(id)a0;
- (id)lowDataModeFromBool:(BOOL)a0;
- (id)lowDataModeGroupSpecifier;
- (void)populateDrillDownSpecifiers;
- (void)prepareDataModeDrillDown;
- (void)prepareLowDataModeSwitch;
- (void)setDataMode:(id)a0 specifier:(id)a1;
- (void)setFooterText;
- (void)setInterfaceCostExpensive:(id)a0 specifier:(id)a1;
- (void)setLowDataMode:(id)a0 specifier:(id)a1;

@end
