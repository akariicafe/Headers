@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView {
    NSArray *_currentSnapshotCharacters;
    NSArray *_incomingSnapshotCharacters;
    NSAttributedString *_currentAttributedText;
    id _pendingAttributedString;
    unsigned long long _pendingDirection;
    BOOL _pendingPushPerCharacter;
    double _currentAnimationFinishTime;
}

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)_snapshotCharactersFromAttributedText:(id)a0 perCharacter:(BOOL)a1;
- (void)_setIncomingSnapshotCharacters:(id)a0;
- (void)_layoutViewsAtIndex:(unsigned long long)a0 forPushEndWithDirection:(unsigned long long)a1;
- (void)_swapCurrentSnapshotCharacters:(id)a0 forIncomingCharacters:(id)a1;
- (void)_layoutForPushStartWithDirection:(unsigned long long)a0;
- (void)_processPendingStringIfNeeded;
- (void)pushToAttributedText:(id)a0 direction:(unsigned long long)a1 perCharacter:(BOOL)a2;
- (void)_setCurrentSnapshotCharacters:(id)a0;
- (void)sizeToFitAttributedText:(id)a0;
- (void)setAttributedTextUnanimated:(id)a0;
- (id)currentAttributedText;

@end
