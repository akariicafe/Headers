@class PRPosterGradientHomeScreenAppearance, PRPosterSolidColorHomeScreenAppearance, PRPosterLockPosterHomeScreenAppearance, PRPosterHomePosterHomeScreenAppearance;

@interface PRImmutableHomeScreenConfiguration : PRPosterHomeScreenConfiguration {
    unsigned long long _selectedAppearanceType;
    PRPosterLockPosterHomeScreenAppearance *_lockPosterAppearance;
    PRPosterSolidColorHomeScreenAppearance *_solidColorAppearance;
    PRPosterGradientHomeScreenAppearance *_gradientAppearance;
    PRPosterHomePosterHomeScreenAppearance *_homePosterAppearance;
}

- (id)lockPosterAppearance;
- (id)solidColorAppearance;
- (unsigned long long)selectedAppearanceType;
- (id)initWithSelectedAppearanceType:(unsigned long long)a0 lockPosterAppearance:(id)a1 solidColorAppearance:(id)a2 gradientAppearance:(id)a3 homePosterAppearance:(id)a4;
- (id)homePosterAppearance;
- (id)gradientAppearance;
- (void).cxx_destruct;

@end
