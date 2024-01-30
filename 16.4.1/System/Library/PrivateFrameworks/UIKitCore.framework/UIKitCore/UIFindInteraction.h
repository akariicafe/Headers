@class UITextSearchOptions, NSString, UIFindSession, UIView, _UIFindNavigatorHarness;
@protocol UIFindInteractionDelegate;

@interface UIFindInteraction : NSObject <UIInteraction> {
    UIView *_alternateHostView;
    unsigned long long _lastUsedHostingStrategy;
    struct { unsigned char respondToPlacementChangeNotifications : 1; unsigned char provideHostScrollView : 1; } _privateDelegateDoes;
    struct { unsigned char aWebView : 1; unsigned char aMailComposeView : 1; } _hostViewIs;
}

@property (class, copy, nonatomic, getter=_globalFindBuffer, setter=_setGlobalFindBuffer:) NSString *_globalFindBuffer;
@property (class, copy, nonatomic, getter=_globalFindBuffer, setter=_setGlobalFindBuffer:) NSString *_globalFindBuffer;

@property (retain, nonatomic) _UIFindNavigatorHarness *findNavigatorHarness;
@property (weak, nonatomic, getter=_hostView, setter=_setHostView:) UIView *_hostView;
@property (readonly, nonatomic) UITextSearchOptions *_configuredSearchOptions;
@property (weak, nonatomic, getter=_hostView, setter=_setHostView:) UIView *_hostView;
@property (readonly, nonatomic) UITextSearchOptions *_configuredSearchOptions;
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;
@property (readonly, nonatomic) UIFindSession *activeFindSession;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *replacementText;
@property (copy, nonatomic) id /* block */ optionsMenuProvider;
@property (readonly, weak, nonatomic) id<UIFindInteractionDelegate> delegate;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)dismissFindNavigator;
- (id)_hostScrollView;
- (void)_didEndActiveFindSession;
- (void)findNext;
- (id)_findNavigatorHosting;
- (void)_presentFindNavigatorShowingReplace:(BOOL)a0;
- (void)findPrevious;
- (void)updateResultCount;
- (void)_recomputeHostingStrategyIfNecessary;
- (unsigned long long)_computedHostingStrategy;
- (void)_systemInputAssistantCenterVisibilityChanged:(id)a0;
- (unsigned long long)_currentHostingStrategy;
- (void)_updateHostViewConformance;
- (void)_didBeginActiveFindSession;
- (void)presentFindNavigatorShowingReplace:(BOOL)a0;
- (void)willMoveToView:(id)a0;
- (id)_createActiveFindSessionIfNecessary;
- (void)_willChangeNavigatorPlacement:(id)a0;
- (id)searchableObject;
- (void)setSearchableObject:(id)a0;
- (id)initWithSessionDelegate:(id)a0;
- (id)_findNavigatorSceneComponent;
- (id)_findNavigatorHostingForStrategy:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_currentFindNavigatorController;
- (void)_keyboardDidChangePlacementNotification:(id)a0;
- (void)didMoveToView:(id)a0;

@end
