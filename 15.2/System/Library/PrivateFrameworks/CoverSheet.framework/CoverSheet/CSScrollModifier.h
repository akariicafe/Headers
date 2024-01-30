@class NSString, UIView;

@interface CSScrollModifier : NSObject <PTSettingsKeyObserver, BSUIScrollViewDelegate> {
    UIView *_targetView;
    BOOL _hasDraggedSinceReset;
    BOOL _cancelled;
    struct CGPoint { double x; double y; } _firstLocation;
    struct CGPoint { double x; double y; } _lastLocation;
    double _minSwipePercentageOfScreen;
    double _inertialMultiplier;
    double _initialScrollViewOffsetX;
    double _accumulatedDrag;
    double _maxAccumulatedDragThreshold;
}

@property (readonly, nonatomic) BOOL recognized;
@property (nonatomic) double maxScrollDistance;
@property (nonatomic) BOOL cancelScrollingIfTooMuchDrag;
@property (nonatomic) double accumulatedDragThresholdPercentage;
@property (nonatomic) double maxDragFromVerticalPerFrame;
@property (nonatomic) double powerOfVerticalDirectionSine2;
@property (nonatomic) double inertialMultiplierSigmoidBase;
@property (nonatomic) double inertialMultiplierSigmoidRange;
@property (nonatomic) double inertialMultiplierSigmoidPivot;
@property (nonatomic) double inertialMultiplierSigmoidAlpha;
@property (nonatomic) double minPercentageSigmoidBase;
@property (nonatomic) double minPercentageSigmoidRange;
@property (nonatomic) double minPercentageSigmoidPivot;
@property (nonatomic) double minPercentageSigmoidAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (double)_horizontalProgressSubtractionFromVertical:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateScrollParameters;
- (void).cxx_destruct;
- (BOOL)scrollFromRightToLeft;
- (struct CGPoint { double x0; double x1; })scrollView:(id)a0 adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2 startPoint:(struct CGPoint { double x0; double x1; })a3 locationInView:(struct CGPoint { double x0; double x1; })a4 horizontalVelocity:(inout double *)a5 verticalVelocity:(inout double *)a6;
- (void)dealloc;
- (void)_loadFromSettings:(id)a0;
- (void)reset;

@end
