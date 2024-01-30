@class CRTextOrientationRecognizerConfiguration, CRTextOrientationModelV1, NSString, CRCTCCVNLPOrientationDecoder;

@interface CRTextOrientationCorrector : NSObject <CRTextOrientationCorrecting>

@property (retain) CRTextOrientationModelV1 *model;
@property (retain) CRCTCCVNLPOrientationDecoder *decoder;
@property (retain) CRTextOrientationRecognizerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (long long)_angleDirectionOfBaselineAngle:(double)a0;
- (long long)_orientationForBaselineAngle:(double)a0;
- (long long)calculateAngleDirectionForInput:(id)a0 error:(id *)a1;
- (void)_applyAngleDirection:(long long)a0 feature:(id)a1;
- (BOOL)correctOrientationForFeatures:(id)a0 image:(id)a1 error:(id *)a2;

@end
