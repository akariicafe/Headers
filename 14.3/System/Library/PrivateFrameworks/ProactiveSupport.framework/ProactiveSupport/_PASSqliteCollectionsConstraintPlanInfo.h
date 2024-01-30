@interface _PASSqliteCollectionsConstraintPlanInfo : NSObject

@property (nonatomic) double estimatedRows;
@property (nonatomic) double estimatedCost;
@property (nonatomic) BOOL unique;
@property (nonatomic) BOOL omit;

- (id)initWithEstimatedRows:(double)a0 estimatedCost:(double)a1 unique:(BOOL)a2 omit:(BOOL)a3;

@end
