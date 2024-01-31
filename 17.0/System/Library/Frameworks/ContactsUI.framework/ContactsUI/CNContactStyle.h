@class UIColor, UIFont;

@interface CNContactStyle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIFont *textFont;
@property (readonly, nonatomic) UIFont *boldTextFont;
@property (nonatomic) long long topActionsViewStyle;
@property (nonatomic) long long inlineActionsViewStyle;
@property (nonatomic) long long contactViewPlatterStyle;
@property (nonatomic) double sectionMaximumPlatterWidth;
@property (nonatomic) double sectionCornerRadius;
@property (nonatomic) double sectionContentInset;
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *sectionHeaderTextColor;
@property (retain, nonatomic) UIColor *taglineTextColor;
@property (retain, nonatomic) UIColor *disabledTextColor;
@property (retain, nonatomic) UIColor *blueSelectionSecondaryTextColor;
@property (retain, nonatomic) UIColor *placeholderTextColor;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (retain, nonatomic) UIColor *highlightedTextLightColor;
@property (retain, nonatomic) UIColor *suggestedLabelTextColor;
@property (retain, nonatomic) UIColor *suggestedValueTextColor;
@property (retain, nonatomic) UIColor *readOnlyTextColor;
@property (retain, nonatomic) UIColor *notesTextColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *sectionIndexBackgroundColor;
@property (nonatomic) BOOL usesOpaqueBackground;
@property (nonatomic) long long separatorBackdropOverlayBlendMode;
@property (retain, nonatomic) UIColor *searchBarBackgroundColor;
@property (retain, nonatomic) UIColor *transportBackgroundColor;
@property (retain, nonatomic) UIColor *transportBorderColor;
@property (retain, nonatomic) UIColor *transportBoldBackgroundColor;
@property (retain, nonatomic) UIColor *contactHeaderBackgroundColor;
@property (retain, nonatomic) UIColor *contactHeaderDropShadowColor;
@property (retain, nonatomic) UIColor *tintColorOverride;
@property (retain, nonatomic) UIColor *headerBackgroundColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } separatorInset;
@property (retain, nonatomic) UIColor *sectionBackgroundColor;
@property (retain, nonatomic) UIColor *selectedCellBackgroundColor;
@property (retain, nonatomic) UIColor *groupedBackgroundColor;
@property (retain, nonatomic) UIColor *searchCellBackgroundColor;
@property (retain, nonatomic) UIColor *listTextColor;
@property (nonatomic) long long barStyle;
@property (nonatomic) BOOL usesTranslucentBarStyle;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) BOOL shouldPresentInCurrentContext;
@property (nonatomic) BOOL blurSupported;
@property (nonatomic) long long modalTransitionStyle;

+ (void)setCurrentStyle:(id)a0;
+ (id)currentStyle;
+ (id)defaultStyle;
+ (id)darkStyle;
+ (id)darkStyleWithOverrideUserInterfaceStyle:(long long)a0;
+ (id)faceTimeStyle;
+ (id)siriStyle;
+ (id)spotlightStyle;
+ (id)testStyle;
+ (id)watchStyle;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
