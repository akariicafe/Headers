@class UIColor;

@interface SolidColorGeneratorClip : MotionGeneratorClip

@property (retain, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)generatorEffect;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;

@end
