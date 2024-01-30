@class NSString, NSExtension;
@protocol NSCopying, SRRemoteAuthorizationPromptViewControllerDelegate;

@interface SRRemoteAuthorizationPromptViewController : _UIRemoteViewController <SRAuthorizationPromptClientInterface, SRRemoteAuthorizationPromptViewController>

@property (weak, nonatomic) id<SRRemoteAuthorizationPromptViewControllerDelegate> delegate;
@property (retain, nonatomic) id<NSCopying> request;
@property (weak, nonatomic) NSExtension *weakExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)exportedInterface;
+ (void)requestViewControllerWithCompletionHandler:(id /* block */)a0;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerProxy;
- (void)authorizationRequestCompleted;
- (void)authorizationRequestDidDisappear;
- (void)authorizationRequestFailedWithError:(id)a0;
- (void)authorizationRequestWillDisappear;
- (void)authorizationUIReadyForDisplayModally:(BOOL)a0;
- (void)deleteAllSamples;
- (void)requestAuthorizationForBundle:(id)a0 services:(id)a1;
- (void)requestAuthorizationMigrationForBundle:(id)a0 services:(id)a1;
- (void)showAppsAndStudies;
- (void)showFirstRunOnboarding;
- (void)showResearchData;
- (void)showStudyAuthorizationForBundlePath:(id)a0;

@end
