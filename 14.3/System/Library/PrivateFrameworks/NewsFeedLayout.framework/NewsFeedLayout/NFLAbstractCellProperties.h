@class NSDictionary, NFLFontCache;

@interface NFLAbstractCellProperties : NSObject

@property (retain, nonatomic) NSDictionary *layout;
@property (retain, nonatomic) NSDictionary *columnIrrespectiveProperties;
@property (retain, nonatomic) NFLFontCache *fontCache;
@property (nonatomic) double scaleValue;
@property (readonly, nonatomic) long long rowSpan;

- (void).cxx_destruct;
- (id)initWithLayout:(id)a0 columnIrrespectiveProperties:(id)a1 fontCache:(id)a2 scaleValue:(double)a3;
- (struct CGSize { double x0; double x1; })sizeForPropertyKey:(id)a0;
- (id)numberForPropertyKey:(id)a0;
- (id)numberForPropertyKeyIrrespectiveOfColumnSpan:(id)a0;
- (double)scaledValueForValue:(double)a0 fontID:(id)a1;
- (struct CGSize { double x0; double x1; })scaledSizeForPropertyKey:(id)a0;
- (id)scaledNumberForPropertyKey:(id)a0;
- (id)scaledNumberForPropertyKeyIrrespectiveOfColumnSpan:(id)a0;
- (id)arrayForPropertyKey:(id)a0;
- (id)dictionaryForPropertyKey:(id)a0 columnSpan:(long long)a1;
- (id)stringForPropertyKey:(id)a0;
- (id)stringForPropertyKeyIrrespectiveOfColumnSpan:(id)a0;
- (double)fontWeightForFontID:(id)a0;
- (BOOL)fontCondensedForFontID:(id)a0;
- (double)scaledFontSizeForFontID:(id)a0;
- (double)lineHeightForFont:(id)a0 locale:(id)a1;

@end
