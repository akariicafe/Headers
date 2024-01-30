@class NSArray, VCPCNNModelEspresso;

@interface VCPVideoCNNBackbone : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_outputNames;
}

@property (readonly) float *outputBeforeFc;
@property (readonly) float *outputBeforeSpatiialPooling;
@property (readonly) float *outputRes4;
@property (readonly) float *outputBeforeTemporalPooling;

+ (id)sharedModel:(id)a0 outputNames:(id)a1 properties:(id)a2;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (int)inference:(float *)a0;

@end
