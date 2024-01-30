@class UIView;
@protocol SPUIRemoteSearchViewDelegate;

@interface SPUIRemoteSearchViewController : SPUISpotlightRemoteViewController

@property (nonatomic) double distanceToTopOfIcons;
@property (retain, nonatomic) UIView *dummyTransitionView;
@property (nonatomic) unsigned long long searchHeaderLayerRenderID;
@property (nonatomic) unsigned int searchHeaderContextID;
@property (copy, nonatomic) id /* block */ willStartPresetingSpotlightHandler;
@property (copy, nonatomic) id /* block */ finishedPresentingSpotlightHandler;
@property (copy, nonatomic) id /* block */ willBeginDismissingSpotlightHandler;
@property (copy, nonatomic) id /* block */ didFinishDismissingSpotlightHandler;
@property (nonatomic) double revealProgress;
@property (nonatomic) unsigned long long source;
@property (weak, nonatomic) id<SPUIRemoteSearchViewDelegate> delegate;

- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)sceneDidInvalidate:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateIntent:(unsigned long long)a0;
- (BOOL)prewarmSceneInTheBackground;
- (void)finishCompletionHandlerIfNeeded;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateSceneSettingsWithBlock:(id /* block */)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didInvalidateSceneWhenForeground;
- (id)sceneSpecification;

@end
