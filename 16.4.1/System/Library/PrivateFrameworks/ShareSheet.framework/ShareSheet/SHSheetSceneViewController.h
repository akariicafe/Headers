@class LPLinkMetadata, FBSceneWorkspace, NSString, SHSheetUIServiceClient, UIView, FBScene;
@protocol UIScenePresenter, SHSheetSession, SHSheetContentPresenter;

@interface SHSheetSceneViewController : UIViewController <FBSceneDelegate, FBSceneObserver, SHSheetContentView>

@property (readonly, nonatomic) FBSceneWorkspace *sceneWorkspace;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) UIView *sceneView;
@property (retain, nonatomic) SHSheetUIServiceClient *serviceClient;
@property (readonly, nonatomic) id<SHSheetSession> session;
@property (weak, nonatomic) id<SHSheetContentPresenter> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) LPLinkMetadata *headerMetadata;

- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)dealloc;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)reloadContent;
- (void)reloadActivity:(id)a0;
- (void)_setupScene;
- (void)_tearDownScene;
- (void)didUpdateAirDropTransferWithChange:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
