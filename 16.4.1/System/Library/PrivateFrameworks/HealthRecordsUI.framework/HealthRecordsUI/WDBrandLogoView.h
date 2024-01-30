@class WDCancellationToken;

@interface WDBrandLogoView : UIImageView

@property (retain, nonatomic) WDCancellationToken *cancellationToken;
@property (nonatomic) BOOL isFallback;
@property (nonatomic) double size;

- (id)initWithSize:(double)a0;
- (void)_updateStyle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)fetchBrandable:(id)a0 dataProvider:(id)a1;

@end
