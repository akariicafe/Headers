@class CSContentActionInterpreter, NSString, CSSessionManager, CSAdjunctListModel, NSMutableDictionary, CSNowPlayingController, CSFocusActivityManager, CSWidgetMetricsProvider, CSAdjunctListActionManager, UIViewController;
@protocol SBFActionProviding, CSNotificationAdjunctListViewControllerDelegate;

@interface CSNotificationAdjunctListViewController : CSCoverSheetViewControllerBase <CSAdjunctListModelDelegate, CSFocusActivityDelegate> {
    CSAdjunctListModel *_model;
    BOOL _isFocusActivityIndicatorVisible;
}

@property (retain, nonatomic) NSMutableDictionary *identifiersToItems;
@property (retain, nonatomic) CSNowPlayingController *nowPlayingController;
@property (retain, nonatomic) CSContentActionInterpreter *actionInterpreter;
@property (nonatomic) BOOL respondingToSubviewLayoutChange;
@property (retain, nonatomic) CSSessionManager *sessionManager;
@property (retain, nonatomic) CSFocusActivityManager *focusActivityManager;
@property (retain, nonatomic) CSAdjunctListActionManager *actionManager;
@property (readonly, nonatomic, getter=isPresentingContent) BOOL presentingContent;
@property (readonly, nonatomic, getter=isPresentingTransientContent) BOOL presentingTransientContent;
@property (readonly, nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (weak, nonatomic) id<SBFActionProviding> contentActionProvider;
@property (weak, nonatomic) UIViewController *digestOnboardingSuggestionViewController;
@property (weak, nonatomic) id<CSNotificationAdjunctListViewControllerDelegate> delegate;
@property (readonly, nonatomic) double listViewContentAnimationDuration;
@property (readonly, nonatomic) double listViewContentAnimationDampingRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeToMimic;
@property (weak, nonatomic) CSWidgetMetricsProvider *widgetMetricsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (id)_groupNameBase;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)_stackView;
- (BOOL)_canAnimate;
- (id)_createItemViewForHost:(id)a0 recipe:(long long)a1;
- (struct CGSize { double x0; double x1; })stackViewContentSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_disappearedTransformForContentWithHeight:(double)a0;
- (void)viewDidLayoutSubviews;
- (void)_updateItemsSizeToMimic;
- (BOOL)handleEvent:(id)a0;
- (void)focusActivityIndicatorDidChangeToVisible:(BOOL)a0;
- (void)_setIsFocusActivityIndicatorVisible:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_didUpdateDisplay;
- (void)_removeItem:(id)a0 animated:(BOOL)a1;
- (void)adjunctListModel:(id)a0 didAddItem:(id)a1;
- (void)adjunctListModel:(id)a0 didRemoveItem:(id)a1;
- (void)_insertItem:(id)a0 atPreferredIndex:(long long)a1 animated:(BOOL)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)adjunctListModel:(id)a0 didUpdateItem:(id)a1 withItem:(id)a2;
- (unsigned long long)_preferredIndexForItem:(id)a0;

@end
