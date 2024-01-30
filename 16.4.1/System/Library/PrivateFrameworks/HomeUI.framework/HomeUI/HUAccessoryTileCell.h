@interface HUAccessoryTileCell : HUTileCell {
    void /* unknown type, empty encoding */ sizeChangeButton;
    void /* unknown type, empty encoding */ showUpdatingAfterDelayWorkItem;
    void /* unknown type, empty encoding */ showingUpdating;
    void /* unknown type, empty encoding */ showingActivity;
    void /* unknown type, empty encoding */ showActivityAfterDelayWorkItem;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ showsSizeChangeButton;

- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)tileSizeButtonTappedWithSender:(id)a0;
- (void)setShowsSizeChangeButton:(BOOL)a0 animated:(BOOL)a1;
- (void)updateSizeChangeButton;

@end
