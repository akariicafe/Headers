@class CLLocation, NSDate, NSDictionary, NTKSolarTimeModel, NTKSolarPath, CLKClockTimerToken, UIView, CALayer, NSString, NTKBezierPathView, CAGradientLayer, CLKDevice, NTKBezierPathPointModel;
@protocol CLKMonochromeFilterProvider;

@interface NTKSolarRichComplicationFullColorImageView : UIView <CLKFullColorImageView> {
    struct { double complicationContentDiameter; double curveLineWidth; struct CGSize { double width; double height; } curveMaxSize; double lineTop; double lineHeight; double strokeDiskDiameter; double strokeDiskBorderWidth; double fillDiskDiameter; double haloMinScale; double haloMaxScale; double backgroundGradientSunsetLayerMaxAlpha; } _layoutConstants;
    UIView *_backgroundView;
    CAGradientLayer *_gradientLayer;
    CALayer *_gradientAdjustmentLayer;
    UIView *_lineView;
    NTKBezierPathView *_pathView;
    NTKSolarTimeModel *_solarTimeModel;
    NTKSolarPath *_solarPath;
    NTKBezierPathPointModel *_pointModel;
    CALayer *_strokeDiskMaskLayer;
    CALayer *_strokeDiskBorderLayer;
    CALayer *_fillDiskLayer;
    CALayer *_fillDiskHaloLayer;
    CALayer *_belowHorizonLayer;
    UIView *_fillDiskHaloContainerView;
    NSDictionary *_waypoints;
    double _horizonYInCurve;
    double _sunsetXInCurve;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _solarPathViewRect;
    double _prevDiskTimePercentage;
    CLKClockTimerToken *_clockTimerToken;
    CLKDevice *_device;
    BOOL _paused;
    BOOL _solarPathNeedsUpdate;
}

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL usingIdealizedTime;
@property (retain, nonatomic) NSDate *timeTravelDate;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_didReceiveSignificantTimeChangeNotification;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0 family:(long long)a1;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)a0;
- (void)updateWithLocation:(id)a0 useIdealizedTime:(BOOL)a1 forceUpdate:(BOOL)a2 animated:(BOOL)a3;
- (void)_setSolarPathNeedsUpdate;
- (void)_didReceiveTimeZoneDidChangeNotification;
- (void)_dateDidUpdate;
- (void)_updateSolarPathWithAnimated:(BOOL)a0;
- (void)_updateSolarDiskWithUsingIdealizedTime:(BOOL)a0 forceUpdate:(BOOL)a1 animated:(BOOL)a2;
- (void)_updateWaypoints;
- (void)_updateGradientBackgroundWithYPosition:(double)a0 xPercentage:(double)a1 topDistanceAboveHorizonLine:(double)a2 bottomDistanceBelowHorizonLine:(double)a3;

@end
