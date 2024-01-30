@class SBSceneView, NSString, SBSceneHandle, UIView;
@protocol SBScenePlaceholderContentContext;

@interface SBSceneViewController : UIViewController <SBSceneViewPresentationConfiguring, SBSceneViewControlling>

@property (readonly, nonatomic, getter=_sceneView) SBSceneView *sceneView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBSceneHandle *sceneHandle;
@property (readonly, nonatomic) long long displayMode;
@property (retain, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentReferenceSize;
@property (readonly, nonatomic) long long contentOrientation;
@property (readonly, nonatomic) long long containerOrientation;

- (id)initWithSceneHandle:(id)a0;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (long long)sceneViewPresentationPriority:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setContentReferenceSize:(struct CGSize { double x0; double x1; })a0 withContentOrientation:(long long)a1 andContainerOrientation:(long long)a2;
- (void)setDisplayMode:(long long)a0 animationFactory:(id)a1 completion:(id /* block */)a2;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)a0;
- (id)newSnapshot;
- (void)dealloc;
- (void)viewDidLoad;
- (void)newSnapshotViewOnQueue:(id)a0 withCompletion:(id /* block */)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)newSnapshotView;
- (void)_setSceneView:(id)a0;

@end
