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
+ (id)serviceViewControllerInterface;
+ (void)requestViewControllerWithCompletionHandler:(id /* block */)a0;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)serviceViewControllerProxy;
- (void)requestAuthorizationForBundle:(id)a0 services:(id)a1;
- (void)showAppsAndStudies;
- (void)showStudyAuthorizationForBundlePath:(id)a0;
- (void)showResearchData;
- (void)showFirstRunOnboarding;
- (void)authorizationRequestCompleted;
- (void)authorizationRequestFailedWithError:(id)a0;
- (void)authorizationUIReadyForDisplayModally:(BOOL)a0;
- (void)authorizationRequestWillDisappear;
- (void)authorizationRequestDidDisappear;
- (void)deleteAllSamples;

@end
