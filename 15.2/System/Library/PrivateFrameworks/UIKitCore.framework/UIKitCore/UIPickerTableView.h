@class UIColor, NSString, NSMutableIndexSet, NSMutableArray;

@interface UIPickerTableView : UITableView <UITableViewDelegate> {
    NSMutableIndexSet *_checkedRows;
    double _lastClickedOffset;
    UIColor *_textColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleRect;
    NSMutableArray *_referencingCells;
    struct { unsigned char allowsMultipleSelection : 1; unsigned char scrollingDirection : 2; unsigned char didSelectDisabled : 1; unsigned char skipRowChangeNotifications : 1; unsigned char scrollingForSelection : 1; unsigned char pickerViewImplementsSelectionBarChanged : 2; unsigned char cancellingAnimation : 1; unsigned char updatingContentInset : 1; } _pickerTableFlags;
}

@property (nonatomic, setter=_setSelectionBarRow:) long long selectionBarRow;
@property (nonatomic) BOOL generatorActivated;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionBarRect;
@property (nonatomic) long long lastSelectedRow;
@property (getter=_playsFeedback, setter=_setPlaysFeedback:) BOOL playsFeedback;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isInternalTableView;

- (id)_containerView;
- (void)_scrollViewAnimationEnded:(id)a0 finished:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateContentInsets;
- (void)layoutSubviews;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)a0 animated:(BOOL)a1;
- (BOOL)isRowChecked:(long long)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)_pickerView;
- (BOOL)selectRow:(long long)a0 animated:(BOOL)a1 notify:(BOOL)a2 updateChecked:(BOOL)a3;
- (BOOL)_beginTrackingWithEvent:(id)a0;
- (void)_playClickIfNecessary;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)_scrollingFinished;
- (long long)_contentInsetAdjustmentBehavior;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)didSelectDisabled:(BOOL)a0;
- (void)_notifyContentOffsetChange;
- (BOOL)selectRow:(long long)a0 animated:(BOOL)a1 notify:(BOOL)a2;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (double)_zForUnitY:(double)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForCellAtY:(double)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (double)_unitYForViewY:(double)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (id)_anyDateLabel;
- (void)_rectChangedWithNewSize:(struct CGSize { double x0; double x1; })a0 oldSize:(struct CGSize { double x0; double x1; })a1;
- (double)_yForY:(double)a0;
- (double)_viewYForUnitY:(double)a0;
- (id)_checkedRows;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)_rotationForCellCenterY:(double)a0;
- (BOOL)_shouldWrapCells;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionBarRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_deactivateFeedbackGeneratorIfNeeded;
- (void)_setContentOffset:(struct CGPoint { double x0; double x1; })a0 notify:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;
- (struct CGPoint { double x0; double x1; })contentOffsetForRowAtIndexPath:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)_yRangingFromZeroTo:(double)a0 forUnitY:(double)a1;
- (double)_zCoordinateForYCoordinate:(double)a0;
- (double)_distanceToCenterForY:(double)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_scrollViewDidInterruptDecelerating:(id)a0;

@end
