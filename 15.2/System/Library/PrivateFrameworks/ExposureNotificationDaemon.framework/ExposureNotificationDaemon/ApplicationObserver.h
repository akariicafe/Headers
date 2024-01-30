@class NSString, NSObject;
@protocol ApplicationObserver;

@interface ApplicationObserver : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (weak, nonatomic) NSObject<ApplicationObserver> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
