@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer

@property (nonatomic) long long groupingOption;
@property (retain, nonatomic) NSCalendar *conversionCalendar;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithGroupingOption:(long long)a0;

@end
