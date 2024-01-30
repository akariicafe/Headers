@interface NSISRestrictedToNonNegativeVariableToBeMinimized : NSISVariable

- (id)markedConstraint;
- (int)valueRestriction;
- (BOOL)shouldBeMinimized;

@end
