@class CAMediaTimingFunction, NSCalendar, NSDate, NTKSpectrumResourceManager;
@protocol MTLDevice, MTLBuffer;

@interface NTKSpectrumConicQuad : CLKUIQuad {
    id<MTLDevice> _device;
    NTKSpectrumResourceManager *_resourceManager;
    id<MTLBuffer> _conicUniformsBuffers[3];
    CAMediaTimingFunction *_mediaTimingFunction;
    void /* unknown type, empty encoding */ _fromColor;
    void /* unknown type, empty encoding */ _toColor;
    void /* unknown type, empty encoding */ _midColor;
    void /* unknown type, empty encoding */ _aliasColor;
    unsigned long long _colorInterpolation;
    double _screenScale;
    void /* unknown type, empty encoding */ _size;
    unsigned long long _frame;
    unsigned long long _style;
    double _startOverrideTime;
    double _endOverrideTime;
    float _startSecondAngle;
    float _startMinuteAngle;
    float _startHourAngle;
    float _endSecondAngle;
    float _endMinuteAngle;
    float _endHourAngle;
    unsigned char _isAnimatingStyle : 1;
    unsigned long long _role;
    float _styleTransitionFraction;
    unsigned long long _toStyle;
}

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *overrideDate;
@property (nonatomic) float opacity;
@property (nonatomic) float maskRadius;
@property (nonatomic, getter=isMasking) BOOL masking;
@property (nonatomic) float vignetteOpacity;
@property (nonatomic) float overlayOpacity;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setStyle:(unsigned long long)a0;
- (BOOL)prepareForTime:(double)a0;
- (void)_significantTimeChanged;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (id)initWithRole:(unsigned long long)a0 screenScale:(double)a1;
- (void)renderForDisplayWithEncoder:(id)a0;
- (void)setFromColor:(id)a0 toColor:(id)a1;
- (void)setFromColor:(id)a0 toColor:(id)a1 midColor:(id)a2 interpolation:(unsigned long long)a3;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)setOverrideDate:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)setOverrideDate:(id)a0 hourRadians:(double)a1 minuteRadians:(double)a2 secondRadians:(double)a3;
- (void)setupForQuadView:(id)a0;

@end
