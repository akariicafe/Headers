@interface ADMutableJasperPointCloud : ADJasperPointCloud

@property (readonly) int capacity;
@property (readonly) float *mutableEuclideanDistances;
@property (readonly) struct CGPoint { double x0; double x1; } *mutableCameraPixels;
@property (readonly) struct CGPoint { double x0; double x1; } *mutableUndistortedCameraPixels;
@property (readonly) void *mutablePoints;
@property (readonly) float *mutableIntensities;
@property (readonly) float *mutableConfidences;
@property (readonly) float *mutableSignalToNoiseRatios;
@property (readonly) char *mutableBankIds;
@property (readonly) char *mutableSpotIds;
@property (readonly) char *mutableEchoIds;
@property (readonly) unsigned int *mutableFlags;

- (id)initWithCapacity:(int)a0;
- (void)blacken;
- (void)replacePointsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withPointsFrom:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)resize:(int)a0;
- (void)appendPointsFrom:(id)a0;
- (void)appendPointsFrom:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)applyPerformanceOverrides;
- (id)initWithCapacity:(int)a0 storage:(struct __CVBuffer { } *)a1;

@end
