@class UIStackView, NSMutableDictionary, CSContentActionInterpreter, CSNowPlayingController, NSString, NSMutableArray, CSAdjunctListModel;
@protocol SBFActionProviding, CSNotificationAdjunctListViewControllerDelegate;

@interface CSNotificationAdjunctListViewController : CSCoverSheetViewControllerBase <CSAdjunctListModelDelegate> {
    CSAdjunctListModel *_model;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableDictionary *identifiersToItems;
@property (retain, nonatomic) NSMutableArray *dismissingItems;
@property (retain, nonatomic) CSNowPlayingController *nowPlayingController;
@property (retain, nonatomic) CSContentActionInterpreter *actionInterpreter;
@property (nonatomic) BOOL respondingToSubviewLayoutChange;
@property (readonly, nonatomic, getter=isPresentingContent) BOOL presentingContent;
@property (readonly, nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (weak, nonatomic) id<SBFActionProviding> contentActionProvider;
@property (weak, nonatomic) id<CSNotificationAdjunctListViewControllerDelegate> delegate;
@property (readonly, nonatomic) double listViewContentAnimationDuration;
@property (readonly, nonatomic) double listViewContentAnimationDampingRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeToMimic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)handleEvent:(id)a0;
- (id)_groupNameBase;
- (void)_insertItem:(id)a0 animated:(BOOL)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)adjunctListModel:(id)a0 didAddItem:(id)a1;
- (void)adjunctListModel:(id)a0 didRemoveItem:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canAnimate;
- (void)_removeItem:(id)a0 animated:(BOOL)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_disappearedTransformForContentWithHeight:(double)a0;
- (void)viewDidLoad;
- (id)_createPlatterForHost:(id)a0 recipe:(long long)a1;
- (void)_didUpdateDisplay;

@end
