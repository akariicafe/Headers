@interface SBWWallpaperEffectImageRequestActionResponse : BSActionResponse

@property (readonly, nonatomic) long long actualStyle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;

@end
