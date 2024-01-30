@interface NSISRestrictedToNonNegativeVariable : NSISVariable

- (BOOL)shouldBeMinimized;
- (int)valueRestriction;
- (id)markedConstraint;

@end
