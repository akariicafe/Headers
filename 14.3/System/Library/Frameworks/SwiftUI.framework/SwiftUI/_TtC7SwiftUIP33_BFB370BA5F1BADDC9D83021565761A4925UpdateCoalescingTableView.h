@interface _TtC7SwiftUIP33_BFB370BA5F1BADDC9D83021565761A4925UpdateCoalescingTableView : UITableView {
    void /* unknown type, empty encoding */ programmaticSelectionDelegate;
    void /* unknown type, empty encoding */ visibleCellsUpdate;
    void /* unknown type, empty encoding */ ignoreGraphUpdates;
    void /* unknown type, empty encoding */ pendingGraphUpdate;
    void /* unknown type, empty encoding */ pendingScrollTarget;
    void /* unknown type, empty encoding */ previousHorizontalMargin;
    void /* unknown type, empty encoding */ _lastUpdateSeed;
    void /* unknown type, empty encoding */ bridgedState;
    void /* unknown type, empty encoding */ shouldDetermineInsetStyle;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

+ (BOOL)_isInternalTableView;

- (void)layoutMarginsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void)layoutSubviews;
- (void)deselectRowAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)selectRowAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(long long)a2;

@end
