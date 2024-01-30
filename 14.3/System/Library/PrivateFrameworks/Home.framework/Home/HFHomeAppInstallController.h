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

- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)applicationsWillInstall:(id)a0;
- (void)applicationsDidFailToInstall:(id)a0;
- (void)request:(id)a0 didCompleteWithError:(id)a1;
- (long long)status;
- (id)appProxy;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (BOOL)_isHomeAppInstalled;
- (void)_dispatchStatusUpdate:(long long)a0;
- (id)downloadHomeAppWithUpdateBlock:(id /* block */)a0;

@end
