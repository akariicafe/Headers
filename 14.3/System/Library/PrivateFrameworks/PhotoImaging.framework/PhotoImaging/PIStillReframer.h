@class VNSaliencyImageObservation, NURuleSystem, NSArray, PIReframeResult, NSData, NSMutableArray, PIStillReframerConfiguration;

@interface PIStillReframer : NSObject

@property (class, readonly, nonatomic) PIStillReframerConfiguration *defaultConfiguration;

@property (readonly, nonatomic) BOOL shouldAttemptReframe;
@property (readonly, copy, nonatomic) NSMutableArray *mutableSubjects;
@property (readonly, nonatomic) NURuleSystem *ruleSystem;
@property (nonatomic) BOOL sceneContainsPet;
@property (nonatomic) BOOL sceneContainsHuman;
@property (nonatomic) BOOL sceneContainsMultipleSubjects;
@property (readonly, nonatomic) PIStillReframerConfiguration *configuration;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overscanBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewBounds;
@property (readonly, copy, nonatomic) NSArray *ANODSubjects;
@property (readonly, copy, nonatomic) NSArray *subjects;
@property (readonly, nonatomic) VNSaliencyImageObservation *saliencyObservation;
@property (readonly, nonatomic) PIReframeResult *result;
@property (readonly, nonatomic) NSData *evaluationData;

+ (id)keyForSubjectWithIndex:(unsigned long long)a0 prefix:(id)a1;
+ (unsigned long long)subjectDirectionForImageOrientation:(long long)a0;
+ (id)detectedSubjectsForImage:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (void)invalidateCaches;
- (id)initWithConfiguration:(id)a0 expandedSubjectConfiguration:(id)a1 overscanBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 image:(id)a4;
- (id)initWithConfiguration:(id)a0 overscanBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 subjects:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateReframedRect;
- (BOOL)canIncludeSubject:(id)a0 boundsPercentageInside:(double *)a1 expandedBoundsPercentageInside:(double *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clamppedSubjectBoundsForEdgeBleed:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })candidateRectForSubject:(id)a0;
- (double)amountOfOverscanUsedByRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldAllowCandidateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forUnwantedSubjects:(id)a1;
- (double)confidenceWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
