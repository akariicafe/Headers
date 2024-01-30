@class PSListController, NSString, Logger, CTXPCServiceSubscriptionContext, CoreTelephonyClient, CTServiceDescriptor;

@interface PSUIDataModeSpecifier : PSSpecifier <Loggable> {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CTServiceDescriptor *_serviceDescriptor;
    CoreTelephonyClient *_ctClient;
    PSListController *_hostController;
    Logger *_logger;
}

@property BOOL showDrillDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFactory:(id)a0 hostController:(id)a1 parentSpecifier:(id)a2;
- (id)getLogger;
- (BOOL)isHighDataModeSupported;
- (void)prepareDataModeDrillDown;
- (void)prepareLowDataModeSwitch;
- (id)isLowDataModeEnabled:(id)a0;
- (void)setLowDataMode:(id)a0 specifier:(id)a1;
- (void)setDataMode:(id)a0 specifier:(id)a1;
- (id)getDataMode:(id)a0;
- (void)populateDrillDownSpecifiers;
- (void)setFooterText;
- (id)isInterfaceCostExpensive:(id)a0;
- (id)dataModeFromNumber:(id)a0;
- (void)setInterfaceCostExpensive:(id)a0 specifier:(id)a1;
- (id)lowDataModeFromBool:(BOOL)a0;
- (id)interfaceCostFromBool:(BOOL)a0;

@end
