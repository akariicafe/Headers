@class NSMapTable, NSMutableDictionary, UIView, _UIKBRTFingerInfo, _UIKBRTFingerDetectionView;

@interface _UIKBRTFingerDetection : _UIKBRTKeyboardTouchObserver

@property (nonatomic) UIView *feedbackParentView;
@property (retain, nonatomic) _UIKBRTFingerDetectionView *feedbackView;
@property (retain, nonatomic) NSMapTable *fingerFeedbackViewMap;
@property (retain, nonatomic) NSMutableDictionary *touches;
@property (retain, nonatomic) _UIKBRTFingerInfo *fakeLeftIndex;
@property (retain, nonatomic) _UIKBRTFingerInfo *fakeRightIndex;

- (BOOL)_linkTouchesInArray:(id)a0 withIndexes:(id)a1 opposingHandIndexes:(id)a2 unassignedIndexes:(id)a3 thumb:(id)a4;
- (void)_updateTouchInfoFromOutsideInWithArray:(id)a0 indexes:(id)a1 newIdentityDict:(id)a2 fakeIndex:(id)a3;
- (id)init;
- (id)fingerIdsRelatedToTouchWithIdentifier:(id)a0 sinceTimestamp:(double)a1 includeThumbs:(BOOL)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)_updateTouchInfoForFingerID:(unsigned long long)a0;
- (void)_updateFingerFeedback;
- (void)_updateFingerFeedback:(id)a0;
- (void)removeTouchWithIdentifier:(id)a0 touchCancelled:(BOOL)a1;
- (id)initWithParentView:(id)a0;
- (void)addTouchLocation:(struct CGPoint { double x0; double x1; })a0 withRadius:(double)a1 withTouchTime:(double)a2 withIdentifier:(id)a3;
- (void)moveTouchWithIdentifier:(id)a0 toLocation:(struct CGPoint { double x0; double x1; })a1 withRadius:(double)a2 atTouchTime:(double)a3;
- (void)updateWithFCenter:(struct CGPoint { double x0; double x1; })a0 jCenter:(struct CGPoint { double x0; double x1; })a1 keySize:(struct CGSize { double x0; double x1; })a2 rowOffsets:(id)a3 homeRowOffsetIndex:(int)a4;
- (unsigned long long)fingerIdForTouchWithIdentifier:(id)a0;
- (id)touchIdentifiersForFingerId:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })touchLocationForFingerId:(unsigned long long)a0;

@end
