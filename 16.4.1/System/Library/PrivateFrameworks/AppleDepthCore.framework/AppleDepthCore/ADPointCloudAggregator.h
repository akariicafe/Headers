@class ADCameraCalibration, ADJasperPointCloudFilterParameters, ADAggregationParameters;

@interface ADPointCloudAggregator : NSObject {
    struct { id x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; double x2; } *_history;
    unsigned long long _historyIndex;
}

@property (readonly, retain, nonatomic) ADAggregationParameters *aggregationParameters;
@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilterParameters;
@property struct { void /* unknown type, empty encoding */ columns[4]; } jasperToCameraTransform;
@property (retain) ADCameraCalibration *colorCameraCalibration;

+ (struct { void /* unknown type, empty encoding */ x0[4]; })transformMetersToMillimiters:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

- (void)dealloc;
- (long long)clear;
- (void).cxx_destruct;
- (id)aggregateForTime:(double)a0 worldToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithAggregationParameters:(id)a0;
- (long long)pushPointCloud:(id)a0 timestamp:(double)a1 worldToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (long long)aggregateAndProjectForTime:(double)a0 worldToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 cropTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 rotateBy:(long long)a3 projectedPointsBuffer:(struct __CVBuffer { } *)a4;
- (long long)aggregateAndProjectForTime:(double)a0 worldToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 filterParams:(id)a2 cropTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 rotateBy:(long long)a4 projectedPointsBuffer:(struct __CVBuffer { } *)a5;
- (id)initWithAggregationParameters:(id)a0 jasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 colorCamera:(id)a2;

@end
