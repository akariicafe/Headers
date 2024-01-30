@interface NSISRestrictedToNonNegativeMarkerVariable : NSISVariable

- (id)markedConstraint;
- (int)valueRestriction;
- (BOOL)shouldBeMinimized;

@end
