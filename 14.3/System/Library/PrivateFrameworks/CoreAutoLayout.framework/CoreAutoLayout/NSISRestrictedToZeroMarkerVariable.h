@interface NSISRestrictedToZeroMarkerVariable : NSISVariable

- (id)markedConstraint;
- (int)valueRestriction;
- (BOOL)shouldBeMinimized;

@end
