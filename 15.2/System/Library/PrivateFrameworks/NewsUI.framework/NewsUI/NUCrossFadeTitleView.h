@class NUTextAndGlyphView, UIImageView, NUCrossFadeViewAnimator, UILabel, NUTitleViewUpdate;
@protocol NUTitleViewStyler;

@interface NUCrossFadeTitleView : UIView

@property (readonly, nonatomic) UIImageView *titleImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) NUTextAndGlyphView *textAndGlyphView;
@property (nonatomic) unsigned long long displayValueType;
@property (readonly, nonatomic) NUCrossFadeViewAnimator *animator;
@property (retain, nonatomic) NUTitleViewUpdate *update;
@property (retain, nonatomic) id<NUTitleViewStyler> styler;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleFrame;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStyler:(id)a0;
- (void)relayoutWithAnimation:(BOOL)a0;
- (id)viewForValueType:(unsigned long long)a0;
- (id)applyStylesToValueFromTitleViewUpdate:(id)a0;
- (void)updateTitleViewWithUpdate:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_applyStylesToTextAndGlyph:(id)a0 styleType:(unsigned long long)a1;
- (id)_applyStylesToText:(id)a0 styleType:(unsigned long long)a1;

@end
