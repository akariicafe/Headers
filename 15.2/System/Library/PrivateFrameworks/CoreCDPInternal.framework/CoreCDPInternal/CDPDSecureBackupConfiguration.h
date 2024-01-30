@class NSDictionary, NSURLSession, CDPContext;

@interface CDPDSecureBackupConfiguration : NSObject {
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}

+ (id)configurationWithContext:(id)a0;
+ (id)_configurationRequestWithURLString:(id)a0;
+ (id)configurationWithContext:(id)a0 andSession:(id)a1;

- (id)_escrowProxyURL;
- (id)_setupConfigurationURLs;
- (id)_escrowConfigurationBag;
- (id)accountInfoFetchSetupDictionary;
- (id)_escrowConfigurationBagFull;
- (id)_escrowProxyConfigurationURLRequest;
- (void).cxx_destruct;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (id)_escrowProxyConfigurationURL;
- (id)_iCloudEnvironment;
- (id)_configurationInfoURLRequest;
- (id)_fetchConfigurationDictionary;
- (id)escrowAuthInfo;
- (id)_fetchEscrowConfigurationBag;

@end
