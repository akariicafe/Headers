@class UIView;
@protocol SPUIRemoteSearchViewDelegate;

@interface SPUIRemoteSearchViewController : SPUISpotlightRemoteViewController

@property (nonatomic) double distanceToTopOfIcons;
@property (retain, nonatomic) UIView *dummyTransitionView;
@property (nonatomic) unsigned long long searchHeaderLayerRenderID;
@property (nonatomic) unsigned int searchHeaderContextID;
@property (nonatomic) unsigned long long searchHeaderBackgroundLayerRenderID;
@property (nonatomic) unsigned int searchHeaderBackgroundContextID;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) double keyboardProtectorHeight;
@property (nonatomic, getter=isKeyboardPresented) BOOL keyboardPresented;
@property (nonatomic) struct CGSize { double width; double height; } searchBarSize;
@property (nonatomic) struct CGSize { double width; double height; } dockedSearchBarSize;
@property (nonatomic) double searchBarCornerRadius;
@property (copy, nonatomic) id /* block */ willStartPresetingSpotlightHandler;
@property (copy, nonatomic) id /* block */ finishedPresentingSpotlightHandler;
@property (copy, nonatomic) id /* block */ willBeginDismissingSpotlightHandler;
@property (copy, nonatomic) id /* block */ didFinishDismissingSpotlightHandler;
@property (nonatomic) double revealProgress;
@property (nonatomic) unsigned long long source;
@property (weak, nonatomic) id<SPUIRemoteSearchViewDelegate> delegate;

- (id)sceneSpecification;
- (void)sceneDidInvalidate:(id)a0;
- (BOOL)prewarmSceneInTheBackground;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)sceneContentStateDidChange:(id)a0;
- (void)finishCompletionHandlerIfNeeded;
- (void)updateSceneSettingsWithBlock:(id /* block */)a0;
- (void)updateIntent:(unsigned long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)didInvalidateSceneWhenForeground;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
