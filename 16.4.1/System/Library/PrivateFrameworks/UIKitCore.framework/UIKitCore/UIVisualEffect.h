@class _UIVisualEffectConfig, _UIBackdropViewSettings;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _UIBackdropViewSettings *effectSettings;
@property (readonly, nonatomic) BOOL _isATVStyle;
@property (readonly, nonatomic) BOOL _isAutomaticStyle;
@property (readonly, nonatomic) _UIVisualEffectConfig *effectConfig;

+ (id)_effectCopyingFromCaptureGroup:(id)a0;
+ (id)effectCombiningEffects:(id)a0;
+ (id)effectCompositingColor:(id)a0;
+ (id)effectCompositingColor:(id)a0 withMode:(long long)a1 alpha:(double)a2;
+ (id)effectCompositingImage:(id)a0;
+ (id)effectCompositingImage:(id)a0 withMode:(long long)a1 alpha:(double)a2;
+ (id)emptyEffect;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithCoder:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectForUserInterfaceStyle:(long long)a0;
- (long long)_expectedUsage;
- (id)effectConfigForQuality:(long long)a0;
- (id)_allEffects;
- (void)_enumerateEffects:(id /* block */)a0;
- (BOOL)_selectorOverridden:(SEL)a0;

@end
