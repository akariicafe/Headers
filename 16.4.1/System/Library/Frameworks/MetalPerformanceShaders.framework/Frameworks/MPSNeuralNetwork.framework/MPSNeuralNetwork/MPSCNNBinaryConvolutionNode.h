@class MPSCNNConvolutionGradientStateNode;

@interface MPSCNNBinaryConvolutionNode : MPSCNNConvolutionNode {
    float _scaleValue;
    unsigned long long _type;
    unsigned long long _flags;
    float *_outputBiasTerms;
    float *_outputScaleTerms;
    float *_inputBiasTerms;
    float *_inputScaleTerms;
}

@property (readonly, nonatomic) MPSCNNConvolutionGradientStateNode *convolutionGradientState;

+ (id)nodeWithSource:(id)a0 weights:(id)a1 outputBiasTerms:(const float *)a2 outputScaleTerms:(const float *)a3 inputBiasTerms:(const float *)a4 inputScaleTerms:(const float *)a5 type:(unsigned long long)a6 flags:(unsigned long long)a7;
+ (id)nodeWithSource:(id)a0 weights:(id)a1 scaleValue:(float)a2 type:(unsigned long long)a3 flags:(unsigned long long)a4;

- (void)dealloc;
- (id)convolutionState;
- (id)initWithSource:(id)a0 weights:(id)a1 outputBiasTerms:(const float *)a2 outputScaleTerms:(const float *)a3 inputBiasTerms:(const float *)a4 inputScaleTerms:(const float *)a5 type:(unsigned long long)a6 flags:(unsigned long long)a7;
- (id)initWithSource:(id)a0 weights:(id)a1 scaleValue:(float)a2 type:(unsigned long long)a3 flags:(unsigned long long)a4;
- (void *)newFilterNode;

@end
