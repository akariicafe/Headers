@interface NSISRestrictedToNonNegativeVariableToBeMinimized : NSISVariable

- (id)markedConstraint;
- (BOOL)shouldBeMinimized;
- (int)valueRestriction;

@end
