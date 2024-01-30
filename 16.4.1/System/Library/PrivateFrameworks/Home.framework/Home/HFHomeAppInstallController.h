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

- (void)_cleanup;
- (void)applicationsDidFailToInstall:(id)a0;
- (id)appProxy;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsWillInstall:(id)a0;
- (void)request:(id)a0 didCompleteWithError:(id)a1;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (long long)status;
- (void).cxx_destruct;
- (id)downloadHomeAppWithUpdateBlock:(id /* block */)a0;
- (void)_dispatchStatusUpdate:(long long)a0;
- (BOOL)_isHomeAppInstalled;

@end
