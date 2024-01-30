@interface SFPersonImageView : UIImageView

@property (nonatomic) BOOL imageIsSquare;
@property (nonatomic) double highlightDarkeningAlpha;

+ (id)darkenImage:(id)a0 toLevel:(double)a1;

- (void)setHighlighted:(BOOL)a0;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (id)initWithImage:(id)a0 isSquare:(BOOL)a1;

@end
