@class UIColor, UIFont, NSString;

@interface HKReferenceRangeViewConfiguration : NSObject

@property (nonatomic) double currentValueToReferenceValuePadding;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double referenceRangeViewHeight;
@property (retain, nonatomic) UIColor *referenceRangeViewColor;
@property (retain, nonatomic) UIColor *referenceRangeViewBorderColor;
@property (retain, nonatomic) UIFont *currentValueValueFontWithRange;
@property (retain, nonatomic) UIFont *currentValueValueFontWithoutRange;
@property (retain, nonatomic) UIFont *currentValueUnitFont;
@property (retain, nonatomic) UIFont *dynamicTypeAnchorFont;
@property (retain, nonatomic) UIColor *currentValueTextColor;
@property (retain, nonatomic) UIColor *currentValueUnitTextColor;
@property (retain, nonatomic) UIColor *referenceValueTextColor;
@property (nonatomic) double referenceValueYOffset;
@property (nonatomic) double currentValueTextSize;
@property (copy, nonatomic) NSString *currentValueUnitTextStyle;
@property (nonatomic) long long currentValueNumLinesIfNoRange;
@property (copy, nonatomic) NSString *referenceRangeTextStyle;
@property (nonatomic) BOOL hideReferenceRangeValues;
@property (nonatomic) Class labelClass;

+ (id)defaultConfiguration;
+ (id)annotationEmbeddedConfiguration;

- (void).cxx_destruct;

@end
