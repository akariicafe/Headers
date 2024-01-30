@interface NSISRestrictedToNonNegativeMarkerVariableToBeMinimized : NSISVariable

- (BOOL)shouldBeMinimized;
- (int)valueRestriction;
- (id)markedConstraint;

@end
