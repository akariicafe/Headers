@class UIColor;

@interface _UIWallpaperEffect : UIVisualEffect {
    UIColor *_color;
}

+ (id)wallpaperEffectWithStyle:(long long)a0;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (long long)_expectedUsage;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithStyle:(long long)a0;

@end
