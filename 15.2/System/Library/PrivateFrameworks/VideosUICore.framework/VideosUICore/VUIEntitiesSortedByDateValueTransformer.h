@class NSDate;

@interface VUIEntitiesSortedByDateValueTransformer : NSValueTransformer

@property (copy, nonatomic) id /* block */ dateForEntityBlock;
@property (nonatomic) unsigned long long maxEntities;
@property (copy, nonatomic) NSDate *earliestDate;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDateForEntityBlock:(id /* block */)a0;

@end
