@class NSDictionary, AMSUIWebClientContext, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue, AMSUIWebJSPropertiesDelegate;

@interface AMSUIWebJSProperties : NSObject

@property (weak, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSDictionary *lastAccountsExport;
@property (retain, nonatomic) CoreTelephonyClient *telephonyClient;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *telephonyContext;
@property (nonatomic) BOOL telephonySetupFailed;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyQueue;
@property (weak, nonatomic) id<AMSUIWebJSPropertiesDelegate> delegate;

+ (BOOL)_hasRequiredTelephonyEntitlement;

- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void)_accountStoreDidChange:(id)a0;
- (void)phoneNumberAvailable:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)phoneNumberChanged:(id)a0;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (id)generateProperties;
- (id)_pluginProperties;
- (id)_clientOptionsProperties;
- (id)_deviceProperties;
- (id)_processProperties;
- (id)_telephoneProperties;
- (id)_accountsProperties;
- (id)_propertiesForClientInfo:(id)a0;
- (BOOL)_setupTelephonyIfNeeded;
- (id)_hexStringFromColor:(id)a0;

@end
