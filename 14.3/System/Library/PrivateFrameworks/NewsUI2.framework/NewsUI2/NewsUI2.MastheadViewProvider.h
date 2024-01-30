@class UIView;

@interface NewsUI2.MastheadViewProvider : NSObject <TSMastheadViewProviderType> {
    void /* unknown type, empty encoding */ mastheadView;
    void /* unknown type, empty encoding */ titleViewStyler;
    void /* unknown type, empty encoding */ layoutAttributesFactory;
    void /* unknown type, empty encoding */ margins;
    void /* unknown type, empty encoding */ model;
}

@property (nonatomic, readonly) UIView *view;

- (id)init;
- (void).cxx_destruct;
- (void)layoutWithBridgedLayoutOptions:(id)a0;
- (double)heightForLayoutOptions:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMarginForLayoutOptions:(id)a0;
- (long long)layoutVariantForTraitCollection:(id)a0;

@end
