@class UIView, _UIKBRTDecayingObject, NSArray, NSTimer, _UIKBRTTouchHistory, NSMutableDictionary, _UIKBRTTouchHistoryInfo, NSMutableSet, _UIKBRTDecayingOffset, NSMapTable;
@protocol _UIKBRTTouchDriftingDelegate;

@interface _UIKBRTTouchDrifting : _UIKBRTKeyboardTouchObserver

@property (retain, nonatomic) NSArray *indexSearchOrder;
@property (retain, nonatomic) NSMutableDictionary *touches;
@property (retain, nonatomic) _UIKBRTTouchHistory *fHistory;
@property (retain, nonatomic) _UIKBRTTouchHistory *jHistory;
@property (retain, nonatomic) _UIKBRTTouchHistory *otherHistory;
@property (nonatomic) struct { double up; double down; double left; double right; } touchError;
@property (nonatomic) BOOL supportsDrifting;
@property (retain, nonatomic) _UIKBRTDecayingObject *enableLatchObj;
@property (retain, nonatomic) _UIKBRTDecayingOffset *leftHandDriftOffsetObj;
@property (retain, nonatomic) _UIKBRTDecayingOffset *leftHandFixedOffsetObj;
@property (retain, nonatomic) _UIKBRTDecayingOffset *rightHandDriftOffsetObj;
@property (retain, nonatomic) _UIKBRTDecayingOffset *rightHandFixedOffsetObj;
@property (retain, nonatomic) _UIKBRTTouchHistoryInfo *leftIndexFingerInfo;
@property (retain, nonatomic) NSMutableSet *leftDriftLockTouchIDs;
@property (nonatomic) BOOL leftDriftRemovingItems;
@property (retain, nonatomic) _UIKBRTTouchHistoryInfo *rightIndexFingerInfo;
@property (retain, nonatomic) NSMutableSet *rightDriftLockTouchIDs;
@property (nonatomic) BOOL rightDriftRemovingItems;
@property (weak, nonatomic) UIView *feedbackParentView;
@property (retain, nonatomic) NSTimer *feedbackTimer;
@property (retain, nonatomic) UIView *leftDriftFeedbackView;
@property (retain, nonatomic) UIView *rightDriftFeedbackView;
@property (retain, nonatomic) UIView *touchHistoryFeedbackView;
@property (retain, nonatomic) NSMapTable *touchHistoryViewMap;
@property (nonatomic) id<_UIKBRTTouchDriftingDelegate> delegate;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } leftHandDriftOffset;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } rightHandDriftOffset;

+ (BOOL)isEnabled;

- (void)updateTouchWithIdentifier:(id)a0 withTouchTime:(double)a1 resultingError:(struct CGPoint { double x0; double x1; })a2 rowOffsetFromHomeRow:(long long)a3;
- (id)init;
- (void).cxx_destruct;
- (void)_resetFeedback;
- (void)_updateDriftWithTouchInfo:(id)a0;
- (void)_updateHistory;
- (id)_touchDictWithFingerIds:(id)a0;
- (struct CGPoint { double x0; double x1; })_offsetForPoint:(struct CGPoint { double x0; double x1; })a0 fromPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateDriftForFingers:(id)a0 leftHand:(BOOL)a1 newestTouch:(id)a2;
- (void)_updateDriftView;
- (struct CGPoint { double x0; double x1; })_pointFromPoint:(struct CGPoint { double x0; double x1; })a0 plusOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateDriftViewTimer:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)removeTouchWithIdentifier:(id)a0 touchCancelled:(BOOL)a1;
- (id)initWithParentView:(id)a0;
- (void)addTouchLocation:(struct CGPoint { double x0; double x1; })a0 withRadius:(double)a1 withTouchTime:(double)a2 withIdentifier:(id)a3;
- (void)moveTouchWithIdentifier:(id)a0 toLocation:(struct CGPoint { double x0; double x1; })a1 withRadius:(double)a2 atTouchTime:(double)a3;
- (void)updateWithFCenter:(struct CGPoint { double x0; double x1; })a0 jCenter:(struct CGPoint { double x0; double x1; })a1 keySize:(struct CGSize { double x0; double x1; })a2 rowOffsets:(id)a3 homeRowOffsetIndex:(int)a4;
- (void)ignoreTouchWithIdentifier:(id)a0 withTouchTime:(double)a1;
- (struct CGPoint { double x0; double x1; })_pinOffset:(struct CGPoint { double x0; double x1; })a0;

@end
