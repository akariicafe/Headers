@class WBSRemotePlistController;

@interface WBSDomainWhitelistManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
}

- (id)init;
- (void).cxx_destruct;
- (void)prepareForTermination;
- (id)initWithBuiltInWhitelistURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;
- (void)isDomainWhitelisted:(id)a0 completionHandler:(id /* block */)a1;

@end
