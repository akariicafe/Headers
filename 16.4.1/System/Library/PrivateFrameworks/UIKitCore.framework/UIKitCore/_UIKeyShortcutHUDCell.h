@interface _UIKeyShortcutHUDCell : UICollectionViewListCell

@property (nonatomic, getter=isFlashing) BOOL flashing;
@property (nonatomic, getter=isCategoryVisible) BOOL categoryVisible;
@property (nonatomic) BOOL drawsBackground;
@property (readonly, nonatomic, getter=isBackgroundVisible) BOOL backgroundVisible;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConfigurationUsingState:(id)a0;
- (BOOL)canBecomeFocused;
- (long long)_focusItemDeferralMode;
- (id)_defaultFocusEffect;
- (long long)_backgroundStyleForState:(id)a0;
- (BOOL)_shouldSkipKeyCommand:(id)a0 forMovement:(long long)a1;
- (id)configurationState;
- (id)defaultContentConfiguration;

@end
