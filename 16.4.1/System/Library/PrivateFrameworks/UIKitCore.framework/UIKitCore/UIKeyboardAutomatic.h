@class _UIStringAndPositionPair;
@protocol UITextCursorAssertion;

@interface UIKeyboardAutomatic : UIKeyboard

@property (retain, nonatomic) id<UITextCursorAssertion> blinkAssertion;
@property (retain, nonatomic) _UIStringAndPositionPair *lastMatchedSupplementalCandidate;
@property (retain, nonatomic) _UIStringAndPositionPair *pendingSupplementalCandidateToInsert;
@property (nonatomic) unsigned long long lastChooseSupplementalItemToInsertCallbackIdentifier;
@property (nonatomic) BOOL showsCandidateBar;
@property (nonatomic) BOOL receivedCandidatesInCurrentInputMode;
@property (nonatomic) BOOL showsCandidateInline;

+ (id)sharedInstance;
+ (id)activeInstance;

- (void)didSuspend:(id)a0;
- (void)maximize;
- (void)willResume:(id)a0;
- (void)minimize;
- (void)prepareForImplBoundsHeightChange:(double)a0 suppressNotification:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)isActive;
- (void)implBoundsHeightChangeDone:(double)a0 suppressNotification:(BOOL)a1;
- (void)activate;
- (BOOL)_isAutomaticKeyboard;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })geometryForHeightDelta:(double)a0;
- (void).cxx_destruct;
- (BOOL)isAutomatic;

@end
