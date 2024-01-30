@class TSUColor;

@interface TSDMutableContactShadow : TSDContactShadow

@property (nonatomic) double height;
@property (nonatomic) double perspective;
@property (nonatomic) double offset;
@property (nonatomic) struct CGColor { } *color;
@property (nonatomic) double radius;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) TSUColor *TSUColor;

- (void)setRadius:(double)a0;
- (void)setOpacity:(double)a0;
- (void)setHeight:(double)a0;
- (void)setColor:(struct CGColor { } *)a0;
- (void)setOffset:(double)a0;
- (void)setPerspective:(double)a0;
- (void)setTSUColor:(id)a0;

@end
