@class NSArray, NSString;

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal>

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)a0;

- (BOOL)getOptionalValidatedInputFaceObservations:(id *)a0 clippedToRegionOfInterest:(BOOL)a1 error:(id *)a2;
- (BOOL)validateConfigurationAndReturnError:(id *)a0;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)isFullCoverageRegionOfInterest;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOfInterestPixelRectForWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
