@interface SwiftUI.UpdateCoalescingTableView : UITableView {
    void /* unknown type, empty encoding */ isSidebarStyle;
    void /* unknown type, empty encoding */ cachedIdealSize;
    void /* unknown type, empty encoding */ rowSpacing;
    void /* unknown type, empty encoding */ safeAreaTransitionState;
    void /* unknown type, empty encoding */ visibleCellsUpdate;
    void /* unknown type, empty encoding */ ignoreGraphUpdates;
    void /* unknown type, empty encoding */ pendingGraphUpdate;
    void /* unknown type, empty encoding */ pendingScrollTarget;
    void /* unknown type, empty encoding */ previousHorizontalMargin;
    void /* unknown type, empty encoding */ _lastUpdateSeed;
    void /* unknown type, empty encoding */ bridgedState;
    void /* unknown type, empty encoding */ shouldDetermineInsetStyle;
    void /* unknown type, empty encoding */ needsUpdateAlignmentInsets;
    void /* unknown type, empty encoding */ lastConfigurationHash;
}

@property (nonatomic) BOOL sectionContentInsetFollowsLayoutMargins;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

+ (BOOL)_isInternalTableView;

- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_rowSpacing;
- (BOOL)_sectionContentInsetFollowsLayoutMargins;
- (void)_setSectionContentInsetFollowsLayoutMargins:(BOOL)a0;

@end
