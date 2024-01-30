@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer

@property (nonatomic) long long groupingOption;
@property (retain, nonatomic) NSCalendar *conversionCalendar;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithGroupingOption:(long long)a0;

@end
