@class NSArray, VCPCNNModelEspresso;

@interface VCPVideoCNNBackbone : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_outputNames;
}

@property (readonly) float *outputLastLayer400;
@property (readonly) float *outputBeforeFc;
@property (readonly) float *outputBeforePooling;

+ (id)sharedModel:(id)a0 outputNames:(id)a1 properties:(id)a2;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (int)inference:(float *)a0;

@end
