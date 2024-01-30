@class NSURL, SWViewController, SWDeveloperSettings;
@protocol SWPresentationManager, SWScaleManager, SWErrorProvider, SWSnapshotManager, SWInteractionProvider, SWConfigurationManager;

@interface SWContainerViewController : UIViewController

@property (readonly, nonatomic) SWViewController *webContentViewController;
@property (readonly, nonatomic) id<SWInteractionProvider> interactionProvider;
@property (readonly, nonatomic) id<SWErrorProvider> errorProvider;
@property (readonly, nonatomic) id<SWConfigurationManager> configurationManager;
@property (readonly, nonatomic) id<SWPresentationManager> presentationManager;
@property (retain, nonatomic) SWDeveloperSettings *developerSettings;
@property (readonly, nonatomic) id<SWScaleManager> scaleManager;
@property (readonly, nonatomic) id<SWSnapshotManager> snapshotManager;
@property (readonly, nonatomic) NSURL *loadedURL;

- (void)prewarm;
- (void)loadURL:(id)a0;
- (void)viewDidLoad;
- (id)accessibilityElements;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadHTMLString:(id)a0 baseURL:(id)a1;
- (void)loadLocalDatastore:(id)a0 completion:(id /* block */)a1;
- (BOOL)allowUserInteractionForInteractionType:(unsigned long long)a0;
- (id)initWithWebContentViewController:(id)a0 interactionProvider:(id)a1 errorProvider:(id)a2 configurationManager:(id)a3 presentationManager:(id)a4 scaleManager:(id)a5 snapshotManager:(id)a6;

@end
