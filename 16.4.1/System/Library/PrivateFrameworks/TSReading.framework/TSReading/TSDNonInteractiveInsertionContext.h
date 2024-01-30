@interface TSDNonInteractiveInsertionContext : TSDInsertionContext

- (BOOL)isInteractive;
- (BOOL)shouldEndEditing;
- (struct CGPoint { double x0; double x1; })preferredCenter;
- (BOOL)fromDragToInsertController;
- (BOOL)hasPreferredCenter;
- (BOOL)insertFloating;
- (BOOL)insertFromDrag;
- (BOOL)insertWillBeDiscarded;
- (BOOL)isPreferredCenterRequired;

@end
