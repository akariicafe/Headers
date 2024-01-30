@interface NTKExtragalacticGlyphAnimation : NSObject

@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGPoint { double x; double y; } translate;

+ (struct CGPoint { double x0; double x1; })_randomTranslationForCorner:(unsigned long long)a0;
+ (id)randomAnimationForCorner:(unsigned long long)a0 device:(id)a1;

- (id)debugDescription;
- (id)initWithRotation:(double)a0 translate:(struct CGPoint { double x0; double x1; })a1;

@end
