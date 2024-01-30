@class NSPointerArray;

@interface GKConstraintUpdateController : NSObject

@property (retain, nonatomic) NSPointerArray *constraintsToUpdate;

+ (id)sharedController;

- (void)updateConstraint:(id)a0;
- (void)dealloc;
- (void)registerConstraint:(id)a0 leading:(double)a1 forFontTextStyle:(id)a2;
- (void)_updateConstraints;

@end
