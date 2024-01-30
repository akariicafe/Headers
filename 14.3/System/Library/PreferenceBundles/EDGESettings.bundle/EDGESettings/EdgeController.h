@class CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface EdgeController : PSBundleController

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;

- (id)specifiersWithSpecifier:(id)a0;
- (void)dealloc;
- (void)setBasebandValue:(id)a0 forTraceName:(id)a1 property:(id)a2;

@end
