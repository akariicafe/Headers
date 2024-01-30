@class WBSRemotePlistController;

@interface WBSUserAgentQuirksManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
}

- (void).cxx_destruct;
- (id)init;
- (void)prepareForTermination;
- (id)initWithBuiltInQuirkListURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;
- (void)getQuirksForDomain:(id)a0 completionHandler:(id /* block */)a1;

@end
