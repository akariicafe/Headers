@class WBSRemotePlistController;

@interface WBSUserAgentQuirksManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
}

- (void)prepareForTermination;
- (id)init;
- (void).cxx_destruct;
- (void)getQuirksForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBuiltInQuirkListURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;

@end
