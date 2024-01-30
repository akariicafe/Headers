@class NSArray, CLKDevice;

@interface NTKNumeralsHourViewsManager : NSObject {
    CLKDevice *_device;
    NSArray *_hourViews;
    long long _visibleHour;
    long long _visibleComplicationSlot;
    BOOL _areComplicationsOff;
    BOOL _adjustingForStatusIndicator;
    BOOL _hasUpperComplication;
}

- (void).cxx_destruct;
- (void)applyFaceColorFromFaceConfiguration:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromFaceColor:(unsigned long long)a1 toFaceColor:(unsigned long long)a2 faceConfiguration:(id)a3;
- (void)setAdjustsForStatusIndicator:(BOOL)a0 animated:(BOOL)a1;
- (void)configureForEditMode:(long long)a0;
- (void)applyTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2 faceConfiguration:(id)a3;
- (void)removeHourViews;
- (id)initWithStyleFromFaceConfiguration:(id)a0 forDevice:(id)a1;
- (void)updateVisibleHour:(long long)a0 targetUtilitySlot:(long long)a1 faceConfiguration:(id)a2 animationProgress:(double)a3 forEditMode:(long long)a4;
- (void)addHourViewsToSuperview:(id)a0;
- (void)applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1;
- (void)applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1;
- (BOOL)needHourAnimationForChangeToHour:(long long)a0 toFaceConfiguration:(id)a1;
- (id)_visibleHourView;
- (id)_hourViewForHour:(long long)a0 loadIfNeeded:(BOOL)a1;
- (void)_update12AdjustmentForStatusIndicator;
- (double)_hourAlphaForEditMode:(long long)a0;
- (struct CGPoint { double x0; double x1; })_currentHourViewPlacementForEditMode:(long long)a0 faceConfiguration:(id)a1;

@end
