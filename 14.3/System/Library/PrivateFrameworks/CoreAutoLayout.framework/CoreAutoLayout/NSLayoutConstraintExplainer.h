@class NSArray, NSMapTable, NSMutableSet, NSLayoutConstraint;

@interface NSLayoutConstraintExplainer : NSObject {
    NSLayoutConstraint *_constraint;
    NSMutableSet *_requiredConstraints;
    NSMutableSet *_frozenConstraints;
    NSMutableSet *_relaxedConstraints;
}

@property (retain) NSMapTable *satisfactionChanges;
@property (retain) NSMapTable *priorities;
@property (retain) NSArray *mutuallyExclusiveConstraints;

- (void)dealloc;
- (void)recalculateExplanation;
- (void)_freezeErrorVariable:(id)a0 forcingZeroValue:(BOOL)a1 inEngine:(id)a2 accumulatingConstraints:(id)a3 andMutuallyExclusiveConstraints:(id *)a4;
- (id)thawConstraint:(id)a0;
- (unsigned long long)_satisfactionChangeCount:(id /* block */)a0 withResults:(id *)a1;
- (id)relaxConstraint:(id)a0;
- (id)initWithConstraint:(id)a0;
- (id)requireConstraint:(id)a0;
- (id)freezeConstraint:(id)a0;
- (id)description;

@end
