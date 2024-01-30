@class UIColor, UIFont, NSString;

@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject <UIKeyCommandDiscoverabilityHUDVisualStyle>

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } HUDViewInsets;
@property (readonly, nonatomic) double HUDPageControlBottomMargin;
@property (readonly, nonatomic) double columnDividerWidth;
@property (readonly, nonatomic) double summaryXPadding;
@property (readonly, nonatomic) double summaryYPadding;
@property (readonly, nonatomic) double summaryDescriptionToModifiersSpacing;
@property (readonly, nonatomic) double summaryModifiersSpacing;
@property (readonly, nonatomic) UIFont *summaryFont;
@property (readonly, nonatomic) double summaryLineHeight;
@property (readonly, nonatomic) double summaryLineSpacing;
@property (readonly, nonatomic) double minimumFontScaleBeforeTruncation;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) UIColor *inputColor;
@property (readonly, nonatomic) UIColor *dividerColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)visualStyleForTraitCollection:(id)a0;

- (double)maxHUDWidthForWidth:(double)a0;
- (double)maxHUDHeightForHeight:(double)a0;
- (double)columnDividerHeightForHUDHeight:(double)a0;

@end
