@interface NSISUnrestrictedVariable : NSISVariable

- (BOOL)shouldBeMinimized;
- (int)valueRestriction;
- (id)markedConstraint;

@end
