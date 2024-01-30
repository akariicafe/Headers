@class UIGestureRecognizer, NSArray, UISelectionFeedbackGenerator, NSString, CNQuickActionsManager, CNAvatarCardActionsTableView, NSIndexPath;
@protocol CNAvatarCardActionsViewDelegate;

@interface CNAvatarCardActionsView : UIView <UITableViewDataSource, UITableViewDelegate, CNQuickActionsManagerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) CNQuickActionsManager *actionsManager;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) CNAvatarCardActionsTableView *tableView;
@property (retain, nonatomic) NSIndexPath *highlightedIndexPath;
@property (retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer;
@property (retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer;
@property (nonatomic) struct CGPoint { double x; double y; } initialLocation;
@property (nonatomic) BOOL expanded;
@property (retain, nonatomic) UISelectionFeedbackGenerator *retargetBehavior;
@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSArray *actionCategories;
@property (nonatomic) BOOL actionsReversed;
@property (nonatomic) BOOL bypassActionValidation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } actionsImageFrame;
@property (weak, nonatomic) id<CNAvatarCardActionsViewDelegate> delegate;
@property (nonatomic) BOOL dismissesBeforePerforming;
@property (readonly, nonatomic, getter=isPerformingAction) BOOL performingAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)reloadData;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (BOOL)_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)reset;
- (void)startTrackingRolloverWithGestureRecognizer:(id)a0;
- (void)stopTrackingRollover;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)actionsManager:(id)a0 orderedPropertiesForProperties:(id)a1 category:(id)a2;
- (id)actionsManager:(id)a0 presentingViewControllerForAction:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)refreshActions;
- (BOOL)_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)resetWithBlock:(id /* block */)a0;
- (void)updateRollover:(id)a0;
- (void)_updateActionsWithBlock:(id /* block */)a0;
- (void)_updateWithActions:(id)a0 withBlock:(id /* block */)a1;
- (id)_effectiveManagerActions;
- (id)_actionAtIndexPath:(id)a0;
- (void)reloadDataWithBlock:(id /* block */)a0;
- (BOOL)performHighlightedAction;
- (id)_indexPathForGestureRecognizer:(id)a0;
- (void)_startTrackingRolloverOnCellAtIndexPath:(id)a0 withGestureRecognizer:(id)a1;
- (void)_dismissCardAnimated:(BOOL)a0;
- (void)_stopTrackingRolloverOnCellAtIndexPath:(id)a0 withGestureRecognizer:(id)a1;
- (void)_updateAllSeparators;
- (void)_performActionAtIndexPath:(id)a0;
- (void)_configureCell:(id)a0 forAction:(id)a1;
- (void)_updateFromActions:(id)a0 toActions:(id)a1 matchingOldIndex:(long long)a2 toNewActionIndex:(long long)a3 invertedAnimation:(BOOL)a4;
- (void)_updateCellSeparator:(id)a0 forIndexPath:(id)a1;
- (void)_setHighlightedIndexPath:(id)a0 isChange:(BOOL)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;

@end
