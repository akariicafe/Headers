@interface TSDDragInsertionContext : TSDInsertionContext {
    struct CGPoint { double x; double y; } mPreferredCenter;
    BOOL mPreferredCenterRequired;
    BOOL mShouldEndEditing;
    BOOL mFromDragToInsertController;
    BOOL mInsertWillBeDiscarded;
}

- (id)init;
- (BOOL)isInteractive;
- (BOOL)shouldEndEditing;
- (struct CGPoint { double x0; double x1; })preferredCenter;
- (BOOL)fromDragToInsertController;
- (BOOL)hasPreferredCenter;
- (id)initWithPreferredCenter:(struct CGPoint { double x0; double x1; })a0 required:(BOOL)a1 shouldEndEditing:(BOOL)a2 fromDragToInsertController:(BOOL)a3 insertWillBeDiscarded:(BOOL)a4;
- (BOOL)insertFloating;
- (BOOL)insertFromDrag;
- (BOOL)insertWillBeDiscarded;
- (BOOL)isPreferredCenterRequired;

@end
