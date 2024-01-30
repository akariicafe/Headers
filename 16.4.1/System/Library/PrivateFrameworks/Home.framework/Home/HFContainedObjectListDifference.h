@class NSArray, NSNumber;

@interface HFContainedObjectListDifference : HFDifference

@property (retain, nonatomic) NSArray *containedObjectResults;
@property (retain, nonatomic) NSNumber *isASubsetOfBValue;
@property (retain, nonatomic) NSNumber *isBSubsetOfAValue;
@property (readonly, nonatomic) BOOL isASubsetOfB;
@property (readonly, nonatomic) BOOL isBSubsetOfA;

+ (id)containedObjectDifferenceWithKey:(id)a0 objectsA:(id)a1 objectsB:(id)a2;
+ (id)containedObjectDifferenceWithKey:(id)a0 objectsA:(id)a1 objectsB:(id)a2 block:(id /* block */)a3;

- (id)descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)reevaluateWithBlock:(id /* block */)a0;

@end
