@interface NSISRestrictedToZeroMarkerVariable : NSISVariable

- (BOOL)shouldBeMinimized;
- (int)valueRestriction;
- (id)markedConstraint;

@end
