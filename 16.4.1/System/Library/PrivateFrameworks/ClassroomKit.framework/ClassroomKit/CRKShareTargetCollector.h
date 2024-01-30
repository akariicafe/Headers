@class NSSet;
@protocol CRKShareTargetCollectorDelegate;

@interface CRKShareTargetCollector : NSObject

@property (copy, nonatomic) NSSet *studentTargets;
@property (copy, nonatomic) NSSet *instructorTargets;
@property (weak, nonatomic) id<CRKShareTargetCollectorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)didFindTargets:(id)a0;
- (void)didRemoveTargets:(id)a0;
- (void)diffNewTargets:(id)a0 againstOldTargets:(id)a1;
- (void)instructorTargetsDidChange:(id)a0;
- (void)studentTargetsDidChange:(id)a0;

@end
