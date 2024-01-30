@class UIImageView;

@interface SBHighlightView : UIView {
    UIImageView *_highlight;
}

@property (readonly, nonatomic) double highlightAlpha;
@property (readonly, nonatomic) double highlightHeight;

+ (id)_highlightImageWithHeight:(double)a0 alpha:(double)a1;
+ (id)imageCache;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlightAlpha:(double)a1 highlightHeight:(double)a2;

@end
