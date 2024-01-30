@interface DCSinglePixelLineView : UIView

@property (nonatomic) BOOL hasSetUpSizeConstraint;

- (void)updateConstraints;
- (void)setUpHeightConstraintIfNecessary;
- (id)findSizeLayoutConstraintIfExists;
- (id)addSizeConstraint;

@end
