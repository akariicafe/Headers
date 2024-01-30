@interface NSISRestrictedToNonNegativeVariable : NSISVariable

- (id)markedConstraint;
- (BOOL)shouldBeMinimized;
- (int)valueRestriction;

@end
