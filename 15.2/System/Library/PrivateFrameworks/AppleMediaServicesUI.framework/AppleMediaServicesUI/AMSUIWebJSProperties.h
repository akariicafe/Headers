@class NSDictionary, AMSUIWebClientContext;
@protocol AMSUIWebJSPropertiesDelegate;

@interface AMSUIWebJSProperties : NSObject

@property (weak, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSDictionary *lastAccountsExport;
@property (weak, nonatomic) id<AMSUIWebJSPropertiesDelegate> delegate;

- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (id)generateProperties;
- (void)_lastConnectionReportDidChange:(id)a0;
- (id)_pluginProperties;
- (id)_clientOptionsProperties;
- (id)_deviceProperties;
- (id)_processProperties;
- (id)_accountsProperties;
- (id)_propertiesForClientInfo:(id)a0;
- (id)_hexStringFromColor:(id)a0;

@end
