@class UIColor, UIFont;

@interface WFModuleAppearance : NSObject

@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) UIColor *shadowColor;
@property (readonly, nonatomic) UIColor *progressShadowColor;
@property (readonly, nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (readonly, nonatomic) double shadowOpacity;
@property (readonly, nonatomic) double shadowRadius;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) double borderWidth;
@property (readonly, nonatomic) UIFont *summaryFont;
@property (readonly, nonatomic) UIFont *unpopulatedSummaryFont;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *parentBackgroundColor;
@property (readonly, nonatomic) UIColor *progressBackgroundColor;
@property (readonly, nonatomic) UIColor *separatorColor;
@property (readonly, nonatomic) UIColor *warningSeparatorColor;
@property (readonly, nonatomic) UIColor *parametersBackgroundColor;
@property (readonly, nonatomic) UIColor *parametersHighlightedColor;
@property (readonly, nonatomic) UIColor *headingButtonColor;
@property (readonly, nonatomic) UIColor *labelColor;

+ (id)defaultAppearance;
+ (id)commentAppearance;
+ (id)appearanceWithLabelColor:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
