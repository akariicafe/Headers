@interface MUInfoCardStyle : NSObject

+ (id)tintColor;
+ (id)tokenBackgroundColor;
+ (id)secondaryTextColor;
+ (id)cardBackgroundColor;
+ (void)setTintColorProvider:(id /* block */)a0;
+ (id)textColor;
+ (long long)platterStyle;
+ (id)actionRowTintColor;
+ (id)attributionTintColor;
+ (id)buttonCellTextColor;
+ (long long)containerStyle;
+ (id)directionsButtonTintColor;
+ (BOOL)hasExternallyProvidedTintColor;
+ (id)imageTileBackgroundColor;
+ (id)labelForProminence:(long long)a0;
+ (id)preferredVerticalCardConfiguration;
+ (id)punchoutButtonPlatterColor;
+ (id)resolvedPrimaryColorForProposedColor:(id)a0;
+ (id)rowSelectedColor;
+ (id)rowUnselectedColor;
+ (void)setInfoCardContainerStyle:(long long)a0;
+ (id)verifiedLogoBackgroundColor;

@end
