@interface NSISRestrictedToNonNegativeMarkerVariableToBeMinimized : NSISVariable

- (id)markedConstraint;
- (int)valueRestriction;
- (BOOL)shouldBeMinimized;

@end
