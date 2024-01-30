@class CRTextSequenceRecognizerModel, NSOrderedSet, NSString;

@interface CRCTCCVNLPOrientationDecoder : NSObject <CRTextDecoding>

@property (retain) CRTextSequenceRecognizerModel *model;
@property (readonly, nonatomic) NSOrderedSet *characterObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (BOOL)shouldDecodeWithLM;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;
- (id)_buildActivationMatrices:(id)a0;
- (void)_decodeFeaturesWithInfo:(id)a0 activations:(id)a1 error:(id *)a2;
- (void)_create2DArraysFromInputArray:(id)a0 classSize:(unsigned long long *)a1 outputArrays:(void *)a2;

@end
