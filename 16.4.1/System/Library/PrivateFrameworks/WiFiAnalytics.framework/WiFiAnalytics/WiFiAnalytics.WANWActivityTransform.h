@interface WiFiAnalytics.WANWActivityTransform : NSObject {
    void /* unknown type, empty encoding */ timeOffset;
    void /* unknown type, empty encoding */ measurement;
    void /* unknown type, empty encoding */ issues;
    void /* unknown type, empty encoding */ singleFragment;
    void /* unknown type, empty encoding */ shorthandConstantStats;
    void /* unknown type, empty encoding */ includeStdDev;
    void /* unknown type, empty encoding */ early;
    void /* unknown type, empty encoding */ later;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSingle:(id)a0;
- (id)expandKeyNameLengthsFrom:(id)a0;
- (id)getTransformedMeasurementForLogging;
- (id)getTransformedMeasurementForTelemetryWithIndex:(unsigned int)a0;
- (id)getTransformedMeasurementWithIndex:(unsigned int)a0;
- (id)initWithLater:(id)a0 early:(id)a1;
- (id)trimKeyNameLengthsFrom:(id)a0;

@end
