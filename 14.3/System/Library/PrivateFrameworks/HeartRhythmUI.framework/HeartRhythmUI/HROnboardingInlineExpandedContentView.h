@interface HROnboardingInlineExpandedContentView : UIView

@property (nonatomic) long long currentUserInterfaceStyle;

+ (id)_badgeFont;
+ (id)_bodyFont;
+ (id)_bodyFontTextStyle;
+ (id)learnMoreAboutAtrialFibrillationExpandedView;
+ (id)viewWithItems:(id)a0;
+ (id)_makeViewWithContentItem:(id)a0;
+ (double)_bodyFontDistance;
+ (id)_spacingBetweenItems:(id)a0;
+ (id)_bodyLabelWithAtrialFibrillationLocalizationKey:(id)a0;
+ (id)_headingLabelWithAtrialFibrillationLocalizationKey:(id)a0;
+ (id)_listLabelWithAtrialFibrillationLocalizationKey:(id)a0;
+ (double)_headingBodyFontDistance;
+ (double)_listFontDistance;
+ (id)_headingBodyFont;
+ (double)_badgeFontDistance;
+ (double)_headingToBadgeFontDistance;
+ (id)_badgeLabelWithLocalizedText:(id)a0;
+ (id)_headingLabelWithLocalizedText:(id)a0;
+ (id)_bodyLabelWithLocalizedText:(id)a0;
+ (id)_learnMoreListLabelWithLocalizedText:(id)a0 URLIdentifier:(long long)a1 delegate:(id)a2;
+ (id)_listLabelWithLocalizedText:(id)a0;
+ (id)_badgeFontTextStyle;
+ (id)_bulletedTextViewWithLocalizationKey:(id)a0;

@end
