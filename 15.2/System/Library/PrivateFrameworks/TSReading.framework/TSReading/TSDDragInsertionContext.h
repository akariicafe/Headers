@interface TSDDragInsertionContext : TSDInsertionContext {
    struct CGPoint { double x; double y; } mPreferredCenter;
    BOOL mPreferredCenterRequired;
    BOOL mShouldEndEditing;
    BOOL mFromDragToInsertController;
    BOOL mInsertWillBeDiscarded;
}

- (BOOL)isInteractive;
- (id)init;
- (struct CGPoint { double x0; double x1; })preferredCenter;
- (id)initWithPreferredCenter:(struct CGPoint { double x0; double x1; })a0 required:(BOOL)a1 shouldEndEditing:(BOOL)a2 fromDragToInsertController:(BOOL)a3 insertWillBeDiscarded:(BOOL)a4;
- (BOOL)hasPreferredCenter;
- (BOOL)isPreferredCenterRequired;
- (BOOL)shouldEndEditing;
- (BOOL)insertFloating;
- (BOOL)insertFromDrag;
- (BOOL)fromDragToInsertController;
- (BOOL)insertWillBeDiscarded;

@end
