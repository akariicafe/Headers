@class CRTextSequenceRecognizerModel, CRRecognizerConfiguration, NSString, CRRegex, CRCtcBeamSearch;

@interface CRTextDecoderCTCV1 : NSObject <CRTextDecoding>

@property (retain) CRRecognizerConfiguration *configuration;
@property (retain) CRTextSequenceRecognizerModel *model;
@property (retain, nonatomic) CRCtcBeamSearch *beamSearch;
@property (retain, nonatomic) CRRegex *regExpressions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;
- (BOOL)shouldDecodeWithLM;
- (id)correctLMDecodingWithRegex:(id)a0 noLMDecoding:(id)a1;
- (void)maxDecodeFeaturesWithInfo:(id)a0 activationMaps:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (void)lmDecodeFeaturesWithInfo:(id)a0 activationMaps:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;

@end
