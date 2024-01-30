@interface TSDNonInteractiveInsertionContext : TSDInsertionContext

- (BOOL)isInteractive;
- (struct CGPoint { double x0; double x1; })preferredCenter;
- (BOOL)hasPreferredCenter;
- (BOOL)isPreferredCenterRequired;
- (BOOL)shouldEndEditing;
- (BOOL)insertFloating;
- (BOOL)insertFromDrag;
- (BOOL)fromDragToInsertController;
- (BOOL)insertWillBeDiscarded;

@end
