@interface CPApplicationController : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ supportedBundleIdentifierCache;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ observers;
}

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
