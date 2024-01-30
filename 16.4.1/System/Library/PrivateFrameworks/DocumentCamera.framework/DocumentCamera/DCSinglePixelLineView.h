@interface DCSinglePixelLineView : UIView

@property (nonatomic) BOOL hasSetUpSizeConstraint;

- (void)updateConstraints;
- (id)addSizeConstraint;
- (id)findSizeLayoutConstraintIfExists;
- (void)setUpHeightConstraintIfNecessary;

@end
