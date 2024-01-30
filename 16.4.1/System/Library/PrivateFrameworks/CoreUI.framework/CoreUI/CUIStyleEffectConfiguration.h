@class NSString;

@interface CUIStyleEffectConfiguration : NSObject <NSCopying>

@property (nonatomic) long long state;
@property (nonatomic) long long presentationState;
@property (nonatomic) long long value;
@property (nonatomic) unsigned long long dimension1;
@property (copy, nonatomic) NSString *appearanceName;
@property (nonatomic) BOOL useSimplifiedEffect;
@property (nonatomic) BOOL foregroundColorShouldTintEffects;
@property (nonatomic) double brightnessMultiplier;
@property (nonatomic) unsigned long long colorTemperature;
@property (nonatomic) double effectScale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldIgnoreForegroundColor;
- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)shouldRespectOutputBlending;

@end
