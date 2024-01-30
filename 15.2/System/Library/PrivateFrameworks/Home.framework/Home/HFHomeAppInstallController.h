@class NAFuture, NSString, NSMutableSet, LSApplicationProxy, ASDSystemAppRequest;

@interface HFHomeAppInstallController : NSObject <ASDRequestObserver, LSApplicationWorkspaceObserverProtocol>

@property (readonly, nonatomic) LSApplicationProxy *appProxy;
@property (retain, nonatomic) ASDSystemAppRequest *request;
@property (retain, nonatomic) NAFuture *activeHomeAppDownloadFuture;
@property (nonatomic) long long lastReportedStatus;
@property (readonly, nonatomic) NSMutableSet *statusUpdaters;
@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)_cleanup;
- (long long)status;
- (void)applicationsWillInstall:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationsDidFailToInstall:(id)a0;
- (id)appProxy;
- (void)request:(id)a0 didCompleteWithError:(id)a1;
- (BOOL)_isHomeAppInstalled;
- (void)_dispatchStatusUpdate:(long long)a0;
- (id)downloadHomeAppWithUpdateBlock:(id /* block */)a0;

@end
