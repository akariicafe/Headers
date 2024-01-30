@class UIVisualEffectView, UITraitCollection;

@interface _UIVisualEffectEnvironment : NSObject <NSCopying>

@property (readonly, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) BOOL allowsDithering;
@property (nonatomic) BOOL allowsBlurring;
@property (nonatomic) BOOL useSimpleVibrancy;
@property (nonatomic) BOOL reducedTransperancy;
@property (copy, nonatomic) UITraitCollection *traitCollection;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHost:(id)a0;

@end
