@class NSString, UIImageView, UILabel, NUTextAndGlyph;

@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long alignment;
@property (retain, nonatomic) NUTextAndGlyph *textAndGlyph;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)nu_crossFadeViewClearVisibleState;
- (void)nu_crossFadeViewSetValue:(id)a0;

@end
