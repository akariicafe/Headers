@class NSString, UIColor;

@interface TLKAppearance : NSObject

@property (readonly) id compositingFilter;
@property (readonly) double accessibilityContrastColorBoost;
@property (readonly) unsigned long long style;
@property (readonly) NSString *name;
@property (readonly) BOOL isDark;
@property (readonly) BOOL isVibrant;
@property (readonly) UIColor *primaryColor;
@property (readonly) UIColor *secondaryColor;
@property (readonly) UIColor *tertiaryColor;
@property (readonly) UIColor *quaternaryColor;
@property (readonly) UIColor *quinaryColor;
@property (readonly) UIColor *primaryButtonColor;
@property (readonly) UIColor *secondaryButtonColor;
@property (readonly) UIColor *tertiaryButtonColor;
@property (readonly) UIColor *quaternaryButtonColor;
@property (readonly) UIColor *backgroundColor;
@property (readonly) UIColor *groupedBackgroundColor;
@property (readonly) UIColor *platterColor;

+ (id)bestAppearanceForTraitCollection:(id)a0;
+ (id)colorWithRed:(unsigned long long)a0 green:(unsigned long long)a1 blue:(unsigned long long)a2;
+ (BOOL)viewHasOverriddenAppearance:(id)a0;
+ (id)appearanceWithStyle:(unsigned long long)a0;
+ (void)disableAppearanceOverrideForView:(id)a0;
+ (id)allAppearances;
+ (id)bestAppearanceForSystem;
+ (id)bestAppearanceForView:(id)a0;

- (void).cxx_destruct;
- (id)textColorForColor:(long long)a0;
- (void)enableAppearanceForView:(id)a0;
- (id)colorForProminence:(unsigned long long)a0;
- (void)disableAppearanceForView:(id)a0;
- (id)buttonColorForProminence:(unsigned long long)a0;
- (void)enableAppearanceForContainer:(id)a0;
- (id)colorWithWhite:(unsigned long long)a0 highContrastWhite:(unsigned long long)a1;
- (void)overrideAppearanceForView:(id)a0;
- (id)colorWithWhite:(unsigned long long)a0;

@end
