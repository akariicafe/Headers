@interface HealthExperienceUI.SwitchCollectionViewCell : HealthExperienceUI.CollectionViewListDisclosureCellNonSelectable {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ switchView;
    void /* unknown type, empty encoding */ baseIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageAccessory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchViewAccessory;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;

- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)switchTapped;

@end
