@class NSError;

@interface PICompositionFinalizer : NURenderRequest

@property (retain, nonatomic) NSError *finalizerError;
@property (nonatomic) unsigned long long performedActions;
@property (nonatomic) double rollAngleDegrees;
@property (nonatomic) double pitchAngleDegrees;
@property (nonatomic) double yawAngleDegrees;
@property (readonly, nonatomic) BOOL shouldAllowPerspectiveCorrection;
@property (nonatomic) unsigned long long candidacy;

+ (id)descriptionForCandidacy:(unsigned long long)a0;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasPerformedAction:(unsigned long long)a0;
- (void)markActionAsPerformed:(unsigned long long)a0;
- (void)performHorizonCorrectionWithCompletion:(id /* block */)a0;
- (void)performNextActionWithCompletion:(id /* block */)a0;
- (void)performPerspectiveCorrectionWithCompletion:(id /* block */)a0;
- (void)processHorizonResult:(id)a0;
- (void)processPerspectiveResult:(id)a0;
- (BOOL)shouldPerformAction:(unsigned long long)a0;

@end
