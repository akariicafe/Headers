@class NSDictionary, NSArray;

@interface FedStatsCombinationType : FedStatsBoundedULongType {
    unsigned long long _classCount;
}

@property (retain, nonatomic) NSDictionary *combinationSpec;
@property (retain, nonatomic, getter=strides) NSDictionary *strides;
@property (retain, nonatomic) NSArray *orderedKeys;

+ (id)kAvailableTypes;
+ (id)createFromDict:(id)a0 possibleError:(id *)a1;

- (long long)dataType;
- (void).cxx_destruct;
- (unsigned long long)classCount;
- (id)sampleForIndex:(unsigned long long)a0;
- (id)decodeFromIndex:(id)a0 possibleError:(id *)a1;
- (id)encodeToIndex:(id)a0 possibleError:(id *)a1;
- (id)initWithCombinationSpec:(id)a0;
- (id)typesInCombination;

@end
