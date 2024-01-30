@class NSDictionary, AMSUIWebClientContext;
@protocol AMSUIWebJSPropertiesDelegate;

@interface AMSUIWebJSProperties : NSObject

@property (weak, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSDictionary *lastAccountsExport;
@property (weak, nonatomic) id<AMSUIWebJSPropertiesDelegate> delegate;

- (void)_accountStoreDidChange:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)_lastConnectionReportDidChange:(id)a0;
- (id)_accountsProperties;
- (id)_clientOptionsProperties;
- (id)_deviceProperties;
- (id)_hexStringFromColor:(id)a0;
- (id)_pluginProperties;
- (id)_processProperties;
- (id)_propertiesForClientInfo:(id)a0;
- (id)generateProperties;

@end
