@class NSArray;

@interface FedStatsCategoricalType : FedStatsBoundedULongType

@property (retain, nonatomic) NSArray *categories;

+ (id)createFromDict:(id)a0 possibleError:(id *)a1;

- (long long)dataType;
- (void).cxx_destruct;
- (id)initWithCategories:(id)a0;
- (id)encodeToIndex:(id)a0 possibleError:(id *)a1;
- (id)decodeFromIndex:(id)a0 possibleError:(id *)a1;
- (id)sampleForIndex:(unsigned long long)a0;
- (id)kOutOfCategories;

@end
