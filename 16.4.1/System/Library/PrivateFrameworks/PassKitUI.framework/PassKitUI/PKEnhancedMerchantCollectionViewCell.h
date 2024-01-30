@class UIColor, UIImageView, CAFilter, PKAccountEnhancedMerchant;

@interface PKEnhancedMerchantCollectionViewCell : UICollectionViewCell {
    CAFilter *_highlightFilter;
    UIColor *_normalInputColor;
    UIColor *_highlightInputColor;
    UIColor *_appliedInputColor;
    BOOL _highlighted;
    BOOL _selected;
}

@property (readonly, nonatomic) PKAccountEnhancedMerchant *enhancedMerchant;
@property (retain, nonatomic) UIImageView *imageView;

- (void)setSelected:(BOOL)a0;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateFilter;
- (void)_createHighlightFilterIfNecessary;
- (void)updateWithAccountEnhancedMerchant:(id)a0;

@end
