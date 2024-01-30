@interface PXSnappingController : NSObject

@property (nonatomic, setter=_setHasEnteredAttractionThreshold:) BOOL _hasEnteredAttractionThreshold;
@property (nonatomic, setter=_setHasEnteredRetentionThreshold:) BOOL _hasEnteredRetentionThreshold;
@property (nonatomic, setter=_setPreviousOffset:) double _previousOffset;
@property (nonatomic, getter=_isPreviousOffsetInvalid, setter=_setPreviousOffsetInvalid:) BOOL _previousOffsetInvalid;
@property (nonatomic, setter=_setAccumulatedOffset:) double _accumulatedOffset;
@property (readonly, nonatomic) double snappingTarget;
@property (nonatomic) double retentionOffsetThreshold;
@property (nonatomic) double attractionOffsetThreshold;
@property (nonatomic) double attractionVelocityThreshold;
@property (nonatomic) BOOL accumulateOffsetWhileSnapped;
@property (readonly, nonatomic, getter=isSnappedToTarget) BOOL snappedToTarget;

- (void)_reset;
- (id)init;
- (void)interactionEnded;
- (BOOL)_isOffset:(double)a0 inThreshold:(double)a1;
- (void)_setBoolPointer:(inout BOOL *)a0 toValue:(BOOL)a1;
- (void)didSnapByAttraction;
- (id)initWithSnappingTarget:(double)a0;
- (void)interactionBegan;
- (void)updateOffset:(inout double *)a0 withVelocity:(double)a1 shouldSnap:(out BOOL *)a2 shouldBreak:(out BOOL *)a3;

@end
