@class NSDictionary, NSURLSession, CDPContext;

@interface CDPDSecureBackupConfiguration : NSObject {
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}

+ (id)configurationWithContext:(id)a0;
+ (id)configurationWithContext:(id)a0 andSession:(id)a1;
+ (id)_configurationRequestWithURLString:(id)a0;

- (void).cxx_destruct;
- (id)_escrowProxyURL;
- (id)_iCloudEnvironment;
- (id)accountInfoFetchSetupDictionary;
- (id)escrowAuthInfo;
- (id)_escrowConfigurationBag;
- (id)_setupConfigurationURLs;
- (id)_escrowConfigurationBagFull;
- (id)_fetchConfigurationDictionary;
- (id)_fetchEscrowConfigurationBag;
- (id)_escrowProxyConfigurationURL;
- (id)_escrowProxyConfigurationURLRequest;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (id)_configurationInfoURLRequest;

@end
