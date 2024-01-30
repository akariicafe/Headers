@class NSString;

@interface AppRecommendations.AppRecommendationsInstallStateGenerator : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_publisher;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ $__lazy_storage_$_installStatePublisher;
    void /* unknown type, empty encoding */ generatorContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_applicationWorkspace;
}

@property (nonatomic, readonly) NSString *description;

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
