@interface NSISRestrictedToNonNegativeVariable : NSISVariable

- (id)markedConstraint;
- (int)valueRestriction;
- (BOOL)shouldBeMinimized;

@end
