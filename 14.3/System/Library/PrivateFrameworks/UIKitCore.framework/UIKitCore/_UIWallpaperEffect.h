@class UIColor;

@interface _UIWallpaperEffect : UIVisualEffect {
    UIColor *_color;
}

+ (id)wallpaperEffectWithStyle:(long long)a0;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void).cxx_destruct;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithStyle:(long long)a0;
- (long long)_expectedUsage;

@end
