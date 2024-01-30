@class NSPredicate, NSMutableDictionary, NSMutableArray;

@interface HRECharacteristicActionMap : NSObject <NSCopying>

@property (nonatomic) BOOL visitedByFlatten;
@property (retain, nonatomic) NSMutableDictionary *characteristicTypeValues;
@property (retain, nonatomic) NSMutableArray *childMaps;
@property (retain, nonatomic) NSPredicate *condition;

+ (id)emptyMap;
+ (id)characteristicActionMap:(id)a0;
+ (id)conditonalCharacteristicActionMap:(id)a0 condition:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mergeWithActionMaps:(id)a0;
- (id)flattenedMapEvaluatedForObject:(id)a0;
- (id)initWithMap:(id)a0 condition:(id)a1;
- (BOOL)conditionSatisfiedByObject:(id)a0;

@end
