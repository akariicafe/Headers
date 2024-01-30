@class NTKAltitudeColorCurve, NSMutableArray, NSArray;

@interface NTKSiderealColorManager : NSObject {
    NSMutableArray *_updateHandlers;
    NTKAltitudeColorCurve *_dialBackground;
    NSArray *_dayGradient;
    NTKAltitudeColorCurve *_civilTwilight;
    NTKAltitudeColorCurve *_nauticalTwilight;
    NTKAltitudeColorCurve *_astronomicalTwilight;
    NTKAltitudeColorCurve *_civilTwilightCurve_p3;
    NTKAltitudeColorCurve *_nauticalTwilightCurve_p3;
    NTKAltitudeColorCurve *_astronomicalTwilightCurve_p3;
    NTKAltitudeColorCurve *_dialBackgroundCurve_p3;
    NSArray *_dayGradientCurve_p3;
    NTKAltitudeColorCurve *_innerComplication;
    NTKAltitudeColorCurve *_outerComplication;
    NTKAltitudeColorCurve *_dayDiskBloom;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_init;
- (void)_notifyHandlers;
- (id)_createElementsFromDict:(id)a0;
- (void)setSunAltitude:(double)a0;
- (void)addColorUpdateHandler:(id /* block */)a0;
- (id)civilTwilightCurveP3;
- (id)nauticalTwilightCurveP3;
- (id)astronomicalTwilightCurveP3;
- (id)dayGradientCurveP3;
- (id)dialBackgroundCurveP3;
- (id)dialBackgroundColorCurve;
- (id)dayGradientColorCurves;
- (id)civilTwilightColorCurve;
- (id)nauticalTwilightColorCurve;
- (id)astronomicalTwilightColorCurve;
- (id)innerComplicationColorCurve;
- (id)outerComplicationColorCurve;
- (id)dayDiskBloomColorCurve;

@end
