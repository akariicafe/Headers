@class NSArray;

@interface BLSHPresentationDifference : NSObject

@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) NSArray *insertions;
@property (readonly, nonatomic) NSArray *removals;

- (id)description;
- (void).cxx_destruct;
- (id)initWithHasChanges:(BOOL)a0 insertedEnvironments:(id)a1 removedEnvironments:(id)a2;

@end
