@class CRTextSequenceRecognizerModel, NSOrderedSet, NSString;

@interface CRCTCCVNLPOrientationDecoder : NSObject <CRTextDecoding>

@property (retain) CRTextSequenceRecognizerModel *model;
@property (readonly, nonatomic) NSOrderedSet *characterObservations;
@property (readonly) BOOL decodeWithCombinedOrientationScriptModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_buildActivationMatrices:(id)a0;
- (void)_create2DArraysFromInputArray:(id)a0 classSize:(unsigned long long *)a1 outputArrays:(void *)a2;
- (BOOL)_decodeFeaturesWithInfo:(id)a0 activations:(id)a1 shouldDecodeScriptResult:(BOOL)a2 shouldDecodeOrientationResult:(BOOL)a3;
- (BOOL)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (BOOL)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 shouldDecodeScriptResult:(BOOL)a2 shouldDecodeOrientationResult:(BOOL)a3 error:(id *)a4;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;
- (BOOL)shouldDecodeWithLM;

@end
