@interface TSDNonInteractiveInsertionContext : TSDInsertionContext

- (BOOL)isInteractive;
- (BOOL)hasPreferredCenter;
- (BOOL)isPreferredCenterRequired;
- (struct CGPoint { double x0; double x1; })preferredCenter;
- (BOOL)shouldEndEditing;
- (BOOL)insertFloating;
- (BOOL)insertFromDrag;
- (BOOL)fromDragToInsertController;
- (BOOL)insertWillBeDiscarded;

@end
