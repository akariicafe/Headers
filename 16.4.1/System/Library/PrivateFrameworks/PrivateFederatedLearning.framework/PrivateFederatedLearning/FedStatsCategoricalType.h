@class NSArray, NSDictionary;

@interface FedStatsCategoricalType : FedStatsBoundedULongType

@property (readonly, copy, nonatomic) NSArray *categories;
@property (readonly, copy, nonatomic) NSDictionary *categoryMap;

+ (id)createFromDict:(id)a0 possibleError:(id *)a1;

- (long long)dataType;
- (void).cxx_destruct;
- (id)sampleForIndex:(unsigned long long)a0;
- (id)initWithCategories:(id)a0 categoryMap:(id)a1;
- (id)decodeFromIndex:(id)a0 possibleError:(id *)a1;
- (id)encodeToIndex:(id)a0 possibleError:(id *)a1;
- (id)kOutOfCategories;

@end
