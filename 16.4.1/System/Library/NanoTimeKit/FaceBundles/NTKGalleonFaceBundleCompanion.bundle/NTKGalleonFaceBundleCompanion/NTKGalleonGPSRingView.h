@class CLKUICurvedLabel, NSString, NSNumberFormatter, CLKFont, UIView, CLKDevice, CALayer;
@protocol NTKGalleonColorPalette;

@interface NTKGalleonGPSRingView : UIView {
    CLKDevice *_device;
    CLKFont *_font;
    UIView *_ringView;
    CALayer *_ringLayer;
    UIView *_latLongView;
    UIView *_inclElevView;
    CALayer *_leftLatLongDotLayer;
    CALayer *_rightLatLongDotLayer;
    CALayer *_leftInclElevDotLayer;
    CALayer *_rightInclElevDotLayer;
    double _ringCenterRadius;
    double _dotRadiansStandoff;
    CLKUICurvedLabel *_coordinatesLabel;
    CLKUICurvedLabel *_timestampLabel;
    CLKUICurvedLabel *_elevationLabel;
    CLKUICurvedLabel *_inclineLabel;
    double _ringFraction;
    double _latLongFraction;
    double _inclineElevationFraction;
    double _tritiumFraction;
    NSNumberFormatter *_elevationFormatter;
    NSString *_gpsCoordinatesFormat;
    NSString *_gpsCoordinatesUnknown;
    NSString *_timestampFormat;
    NSString *_timestampNoUpdate;
    NSString *_timestampJustUpdated;
    NSString *_timestampNotAvailable;
    NSString *_timestampUpdating;
    NSString *_inclineFormat;
    NSString *_inclineUnknown;
    NSString *_elevationFormat;
    NSString *_elevationUnknown;
    NSString *_elevationApproximateFormat;
    NSString *_currentElevationText;
    NSString *_currentInclineText;
    BOOL _usesMetric;
    BOOL _locationUnavailable;
}

@property (retain, nonatomic) id<NTKGalleonColorPalette> palette;
@property (nonatomic) unsigned long long bezelStyle;
@property (nonatomic) double altitude;
@property (nonatomic) double incline;
@property (nonatomic) double latency;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (void)_updateLabelVisibility;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_fontSize;
- (void)locationUnavailable;
- (double)ringThickness;
- (double)getRingDiameter;
- (double)_easeInCurveWithFraction:(double)a0;
- (void)_layoutCurvedLabel:(id)a0 top:(BOOL)a1;
- (void)_positionDotsForCenterAngle:(double)a0 leftDot:(id)a1 rightDot:(id)a2;
- (void)_positionRingViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_ringFrame;
- (void)_setupStrings;
- (void)_updateCurvedLabel:(id)a0 withString:(id)a1 top:(BOOL)a2;
- (void)_updateElevationInclineColors;
- (void)_updateLatLongColors;
- (void)_updateRingThickness;
- (void)applyTransitionFraction:(double)a0 fromBezelStyle:(unsigned long long)a1 toBezelStyle:(unsigned long long)a2;
- (void)applyTritiumFraction:(double)a0;
- (BOOL)gpsRingEnabled;
- (void)locationUpdated:(id)a0;
- (double)minimumRingThickness;
- (void)setAltitude:(double)a0 approximate:(BOOL)a1;

@end
