@class UIGestureRecognizer, UISelectionFeedbackGenerator, NSString, _CNUINavigationListViewPermissiveGestureRecognizerDelegate, NSIndexPath, UILongPressGestureRecognizer;
@protocol CNUINavigationListViewDelegate, CNUINavigationListViewDataSource;

@interface CNUINavigationListView : UITableView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer;
@property (retain, nonatomic) UIGestureRecognizer *additionalSelectionGestureRecognizer;
@property (retain, nonatomic) UIGestureRecognizer *pressGestureRecognizer;
@property (retain, nonatomic) NSIndexPath *trackedElementIndexPath;
@property (nonatomic) struct CGPoint { double x; double y; } gestureStartLocation;
@property (nonatomic) struct CGPoint { double x; double y; } gestureStartLocationInWindow;
@property (retain, nonatomic) UISelectionFeedbackGenerator *retargetBehavior;
@property (retain, nonatomic) _CNUINavigationListViewPermissiveGestureRecognizerDelegate *selectionGestureRecognizerDelegate;
@property (weak, nonatomic) id<CNUINavigationListViewDataSource> navigationListViewDataSource;
@property (weak, nonatomic) id<CNUINavigationListViewDelegate> navigationListViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)disableHeaderAccessibilityElements;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)willMoveToWindow:(id)a0;
- (void).cxx_destruct;
- (void)stopTrackingElementAtIndexPath:(id)a0;
- (void)clearAdditionalSelectionGestureRecognizer;
- (id)dequeueDetailNavigationListViewCell;
- (id)dequeueNavigationListViewCell;
- (id)disclosureNavigationListViewCellForRowAtIndexPath:(id)a0;
- (id)elementAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)handlePanGestureRecognizerUpdate:(id)a0;
- (void)handlePressSelection;
- (void)handleSelectionGestureRecognizerUpdate:(id)a0;
- (BOOL)location:(struct CGPoint { double x0; double x1; })a0 isInAccessoryControlTouchArea:(id)a1;
- (void)notifyDelegateWithSelectionEventAtIndexPath:(id)a0;
- (void)notifyDelegateWithSelectionEventAtPoint:(struct CGPoint { double x0; double x1; })a0 trackedElementIndexPath:(id)a1;
- (void)startTrackingElementAtIndexPath:(id)a0;
- (void)startTrackingSelectionFromGestureRecognizer:(id)a0;
- (void)updateCellAccessoryControlState:(id)a0 withTrackedLocation:(struct CGPoint { double x0; double x1; })a1;

@end
