@class UIColor;

@interface GKColorPalette : NSObject

@property (readonly) UIColor *primaryTextColor;
@property (readonly) UIColor *standardTextColor;
@property (readonly) UIColor *disabledTextColor;
@property (readonly) UIColor *emphasizedTextColor;
@property (readonly) UIColor *selectedTextColor;
@property (readonly) UIColor *removeItemTextColor;
@property (readonly) UIColor *textOnDarkBackgroundColor;
@property (readonly) UIColor *emphasizedTextOnDarkBackgroundColor;
@property (readonly) UIColor *systemInteractionColor;
@property (readonly) UIColor *disabledButtonTitleColor;
@property (readonly) long long windowBackgroundBlurStyle;
@property (readonly) UIColor *windowBackgroundColor;
@property (readonly) UIColor *viewBackgroundColor;
@property (readonly) UIColor *opaqueViewBackgroundColor;
@property (readonly) UIColor *floatingHeaderViewBackgroundColor;
@property (readonly) UIColor *pinnedHeaderViewBackgroundColor;
@property (readonly) UIColor *activityIndicatorColor;
@property (readonly) UIColor *selectedCellBackgroundColor;
@property (readonly) UIColor *separatorLineColor;
@property (readonly) UIColor *friendTintColor;
@property (readonly) UIColor *friendRequestTintColor;
@property (readonly) UIColor *friendRequestCaptionTintColor;
@property (readonly) UIColor *localPlayerTintColor;
@property (readonly) UIColor *challengesTintColor;
@property (readonly) UIColor *shareTintColor;
@property (readonly) UIColor *cellActionDestructiveColor;
@property (readonly) UIColor *cellActionColor;

+ (id)sharedPalette;
+ (id)paletteFromImage:(id)a0;

@end
