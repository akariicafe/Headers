@class NSString;

@interface RWIProtocolCSSFontVariationAxis : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *tag;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double defaultValue;
@property (copy, nonatomic) NSString *name;

- (id)initWithTag:(id)a0 minimumValue:(double)a1 maximumValue:(double)a2 defaultValue:(double)a3;

@end
