@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer

@property (nonatomic) long long groupingOption;
@property (retain, nonatomic) NSCalendar *conversionCalendar;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)init;
- (id)transformedValue:(id)a0;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)initWithGroupingOption:(long long)a0;

@end
