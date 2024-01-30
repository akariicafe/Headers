@interface HUEditableTextIconCell : HUEditableTextCollectionListCell <HUCellProtocol> {
    void /* unknown type, empty encoding */ displayStyle;
    void /* unknown type, empty encoding */ iconConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconAccessory;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ item;

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
