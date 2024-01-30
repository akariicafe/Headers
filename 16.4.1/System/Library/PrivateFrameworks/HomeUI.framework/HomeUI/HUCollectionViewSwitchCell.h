@interface HUCollectionViewSwitchCell : UICollectionViewListCell <HUCellProtocol, HUDisableableCellProtocol> {
    void /* unknown type, empty encoding */ _disabled;
    void /* unknown type, empty encoding */ switchView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ item;
@property (nonatomic) BOOL disabled;
@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

- (void)configure;
- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isDisabled;
- (void).cxx_destruct;
- (void)_toggleOn;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
