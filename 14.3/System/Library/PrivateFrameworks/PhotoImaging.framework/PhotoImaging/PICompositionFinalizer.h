@class NSError, NSArray, VNSaliencyImageObservation;

@interface PICompositionFinalizer : NURenderRequest

@property (retain, nonatomic) NSError *finalizerError;
@property (nonatomic) unsigned long long performedActions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } reframeRect;
@property (nonatomic) double rollAngleDegrees;
@property (nonatomic) double pitchAngleDegrees;
@property (nonatomic) double yawAngleDegrees;
@property (copy, nonatomic) NSArray *keyframes;
@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } stabCropRect;
@property (retain, nonatomic) VNSaliencyImageObservation *saliencyObservation;
@property (copy, nonatomic) NSArray *ANODSubjects;
@property (readonly, nonatomic) BOOL shouldAllowPerspectiveCorrection;
@property (nonatomic) unsigned long long candidacy;

+ (id)descriptionForCandidacy:(unsigned long long)a0;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0;
- (void)performNextActionWithCompletion:(id /* block */)a0;
- (BOOL)shouldPerformAction:(unsigned long long)a0;
- (BOOL)hasPerformedAction:(unsigned long long)a0;
- (void)markActionAsPerformed:(unsigned long long)a0;
- (void)performReframeWithCompletion:(id /* block */)a0;
- (void)performHorizonCorrectionWithCompletion:(id /* block */)a0;
- (void)performPerspectiveCorrectionWithCompletion:(id /* block */)a0;
- (void)processStillReframeResult:(id)a0;
- (void)processVideoReframeResult:(id)a0;
- (void)processHorizonResult:(id)a0;
- (void)processPerspectiveResult:(id)a0;

@end
