@class HFComparisonResult;

@interface HFContainedObjectDifference : HFDifference

@property (retain, nonatomic) HFComparisonResult *containedObjectResult;

+ (id)containedObjectDifferenceWithKey:(id)a0 comparisonResult:(id)a1;

- (id)descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
