@class NSArray, VCPCNNModelEspresso;

@interface VCPVideoCaptionEncoder : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_outputNames;
    BOOL _forceNNGraph;
}

@property (readonly) int embeddingHeight;
@property (readonly) int embeddingWidth;
@property (readonly) int embeddingChannels;
@property (readonly) int embeddingSequenceLength;
@property (readonly) float *videoEmbedding;

- (void).cxx_destruct;
- (id)initWithModelPath:(id)a0;
- (int)inference:(float *)a0;

@end
