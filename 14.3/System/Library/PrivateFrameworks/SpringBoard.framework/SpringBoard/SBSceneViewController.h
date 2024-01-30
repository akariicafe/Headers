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
@property (readonly, nonatomic) long long contentInterfaceOrientation;

- (long long)sceneViewPresentationPriority:(id)a0;
- (id)newSnapshotView;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (id)newSnapshot;
- (void)setContentReferenceSize:(struct CGSize { double x0; double x1; })a0 withInterfaceOrientation:(long long)a1;
- (void)newSnapshotViewOnQueue:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithSceneHandle:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDisplayMode:(long long)a0 animationFactory:(id)a1 completion:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)invalidate;
- (void)viewDidLoad;
- (void)_setSceneView:(id)a0;

@end
