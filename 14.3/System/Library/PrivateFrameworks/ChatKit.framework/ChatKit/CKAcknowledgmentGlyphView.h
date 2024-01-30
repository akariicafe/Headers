@class UIColor;

@interface CKAcknowledgmentGlyphView : UIView

@property (readonly, nonatomic) long long acknowledgmentType;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } glyphOffset;
@property (readonly, nonatomic) double animationDuration;
@property (retain, nonatomic) UIColor *glyphColor;

+ (void)cacheGlyphView:(id)a0;
+ (id)glyphViewForAcknowledgmentType:(long long)a0 glyphColor:(char)a1;
+ (id)viewCache;

- (void).cxx_destruct;
- (long long)acknowledgmentType;
- (void)animateWithBeginTime:(double)a0 completionDelay:(double)a1 completion:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(char)a1;

@end
