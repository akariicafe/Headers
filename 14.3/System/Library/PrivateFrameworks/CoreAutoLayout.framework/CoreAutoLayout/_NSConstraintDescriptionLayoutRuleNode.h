@class NSLayoutConstraint;

@interface _NSConstraintDescriptionLayoutRuleNode : _NSLayoutRuleNode

@property (retain) NSLayoutConstraint *ownedConstraint;

- (void)dealloc;

@end
