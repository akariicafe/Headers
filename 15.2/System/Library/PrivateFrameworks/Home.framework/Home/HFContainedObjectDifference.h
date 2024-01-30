@class HFComparisonResult;

@interface HFContainedObjectDifference : HFDifference

@property (retain, nonatomic) HFComparisonResult *containedObjectResult;

+ (id)containedObjectDifferenceWithKey:(id)a0 comparisonResult:(id)a1;

- (id)descriptionBuilder;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
