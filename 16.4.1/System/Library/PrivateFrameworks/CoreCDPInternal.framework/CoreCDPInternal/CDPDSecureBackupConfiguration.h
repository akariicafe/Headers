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

- (id)_escrowProxyConfigurationURL;
- (id)_fetchEscrowConfigurationBag;
- (id)accountInfoFetchSetupDictionary;
- (id)_escrowProxyConfigurationURLRequest;
- (id)_fetchConfigurationDictionary;
- (id)_setupConfigurationURLs;
- (id)_configurationInfoURLRequest;
- (id)escrowAuthInfo;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (id)_escrowProxyURL;
- (id)_escrowConfigurationBag;
- (id)_iCloudEnvironment;
- (id)_escrowConfigurationBagFull;
- (void).cxx_destruct;

@end
