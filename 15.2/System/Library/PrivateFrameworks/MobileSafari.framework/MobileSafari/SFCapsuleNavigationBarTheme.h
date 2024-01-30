@class SFUnifiedTabBarItemTitleContainerViewTheme, NSString, _SFBarTheme;

@interface SFCapsuleNavigationBarTheme : _SFBarTheme <SFUnifiedTabBarItemTitleThemeProviding>

@property (retain, nonatomic) _SFBarTheme *backgroundTheme;
@property (nonatomic) BOOL hidesOverlayEffects;
@property (readonly, nonatomic) _SFBarTheme *contentTheme;
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *titleTheme;
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *tabTitleTheme;
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *activeTabTitleTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backdropEffectForStyle:(long long)a0;
+ (BOOL)backdropIsDarkForStyle:(long long)a0;

@end
