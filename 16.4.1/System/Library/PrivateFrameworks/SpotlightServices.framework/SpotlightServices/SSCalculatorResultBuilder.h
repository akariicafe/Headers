@class NSString;

@interface SSCalculatorResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *input;
@property (retain, nonatomic) NSString *output;
@property (nonatomic) BOOL isCalculation;
@property (nonatomic) BOOL isCurrencyConversion;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (id)yahooAttributionImageWithSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildCompactCardSection;
- (id)buildInlineCardSections;
- (id)buildPreviewButtonItems;
- (id)buildResult;

@end
