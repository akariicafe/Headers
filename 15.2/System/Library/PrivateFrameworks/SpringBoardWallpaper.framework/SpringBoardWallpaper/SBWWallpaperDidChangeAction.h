@interface SBWWallpaperDidChangeAction : BSAction

@property (readonly, nonatomic) long long variant;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithVariant:(long long)a0;

@end
