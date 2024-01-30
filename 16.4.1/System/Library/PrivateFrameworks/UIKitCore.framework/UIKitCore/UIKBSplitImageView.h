@class NSString, UIImageView, NSArray, NSLayoutConstraint;

@interface UIKBSplitImageView : UIView {
    BOOL _canStretchAsFullWidth;
    UIImageView *_fullView;
    UIImageView *_splitLeft;
    UIImageView *_splitRight;
    NSArray *_splitConstraints;
    NSLayoutConstraint *_leftWidthConstraint;
    NSLayoutConstraint *_rightWidthConstraint;
}

@property (retain, nonatomic) NSString *filterType;

- (void)setImage:(id)a0 cachedWidth:(double)a1 keyplane:(id)a2;
- (void)setContentsMultiplyColor:(id)a0;
- (void)insertSubviewAtBottom:(id)a0;
- (void)prepareForDisplay:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 canStretchAsFullWidth:(BOOL)a1;
- (void)clearImages;
- (BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)setImage:(id)a0 splitLeft:(id)a1 splitRight:(id)a2 keyplane:(id)a3;
- (void).cxx_destruct;

@end
