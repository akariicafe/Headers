@class BSUIEmojiLabelView, NSString, MPUMarqueeView, UIColor, UIView, UIFont;

@interface MRUMarqueeLabel : UIView

@property (retain, nonatomic) MPUMarqueeView *marqueeView;
@property (retain, nonatomic) BSUIEmojiLabelView *label;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (weak, nonatomic) UIView *animationReferenceView;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fadeEdgeInsets;
@property (nonatomic) double contentGap;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

- (void)addCoordinatedMarqueeView:(id)a0;
- (void)mru_applyVisualStylingWithColor:(id)a0 alpha:(double)a1 blendMode:(long long)a2;
- (void)mt_applyVisualStyling:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (void).cxx_destruct;

@end
