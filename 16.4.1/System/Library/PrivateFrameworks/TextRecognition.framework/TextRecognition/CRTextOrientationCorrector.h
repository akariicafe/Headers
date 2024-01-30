@class CRTextOrientationRecognizerConfiguration, CRTextOrientationModelV1, NSString, CRCTCCVNLPOrientationDecoder;

@interface CRTextOrientationCorrector : NSObject <CRTextOrientationCorrecting, CRTextSequenceScriptCorrecting>

@property (retain) CRTextOrientationModelV1 *model;
@property (retain) CRCTCCVNLPOrientationDecoder *decoder;
@property (retain) CRTextOrientationRecognizerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (long long)_angleDirectionOfBaselineAngle:(double)a0;
- (void)_applyAngleDirection:(long long)a0 feature:(id)a1;
- (BOOL)_loadResourcesWithError:(id *)a0;
- (long long)_orientationForBaselineAngle:(double)a0;
- (long long)calculateAngleDirectionForInput:(id)a0 error:(id *)a1;
- (BOOL)correctOrientationOnAllFeatures:(BOOL)a0 sortedFeatures:(id)a1 image:(id)a2 error:(id *)a3;
- (BOOL)correctSequenceScriptOnAllFeatures:(BOOL)a0 sortedFeatures:(id)a1 image:(id)a2 error:(id *)a3;
- (BOOL)decodeOutputForInput:(id)a0 shouldDecodeScriptResult:(BOOL)a1 shouldDecodeOrientationResult:(BOOL)a2 error:(id *)a3;

@end
