@class NSArray;

@interface _UIMaterial : NSObject

@property (readonly, nonatomic, getter=isVibrant) BOOL vibrant;
@property (readonly, nonatomic) NSArray *backgroundEffects;
@property (readonly, nonatomic) NSArray *contentEffects;

+ (id)materialMapping;
+ (id)materialForSystemColorName:(id)a0;
+ (id)vibrancyEffectWithA:(double)a0 B:(double)a1 C:(double)a2 D:(double)a3 E:(double)a4 F:(double)a5;

- (id)initWithVisualEffect:(id)a0;
- (id)initWithBlur:(long long)a0;
- (id)description;
- (id)initWithVibrantVisualEffect:(id)a0;
- (id)initWithVibrancy:(long long)a0;
- (void).cxx_destruct;

@end
