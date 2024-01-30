@class NSNumber, NSString, PIFaceObservationCache;

@interface PICropAutoCalculator : NUAutoCalculator <NUTimeBased, PIFaceObservingAutoCalculator>

@property BOOL shouldPerformAutoCrop;
@property BOOL shouldPerformAutoStraighten;
@property BOOL shouldUseAutoStraightenVerticalDetector;
@property (copy) NSNumber *autoStraightenVerticalAngleThreshold;
@property (copy) NSNumber *autoStraightenDominantAngleDiffThreshold;
@property double maxAutoStraighten;
@property double minAutoStraighten;
@property BOOL debugFilesEnabled;
@property (copy) NSString *debugFilesPrefix;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PIFaceObservationCache *faceObservationCache;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })overcaptureRectForStitchedOvercaptureSize:(struct { long long x0; long long x1; })a0 overcaptureVideoComplementSize:(struct { long long x0; long long x1; })a1 primarySize:(struct { long long x0; long long x1; })a2 autoLoopStabilizedCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (BOOL)stitchedOvercaptureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 primaryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forComposition:(id)a2 error:(out id *)a3;
+ (id)updateCropAdjustment:(id)a0 after:(id)a1 error:(out id *)a2;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)imageProperties:(out id *)a0;
- (BOOL)undoExifOrientation:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } *)a0 error:(out id *)a1;

@end
