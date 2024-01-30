@class NSData;

@interface PPTopicTransform : NSObject {
    NSData *_data;
    struct header_s { unsigned int qidCount; unsigned int topicCount; unsigned int nonzeroCount; unsigned int payloadLen; } _header;
    const float *_bias;
    const unsigned int *_qids;
    const unsigned int *_matrixIndices;
    const float *_matrixElts;
    const char *_payloads;
    unsigned char _featureSmoothingType;
    unsigned char _featureScalingType;
    unsigned char _featureNormalizationType;
    unsigned char _outputScalingType;
    unsigned char _activationType;
    float _featureSmoothingFactor;
    float _featureScalingFactor;
    float _outputScalingFactor;
    float _attenuationFactor;
}

@property (readonly, nonatomic) unsigned long long outputTopicCount;
@property (readonly, nonatomic) float threshold;

- (void)_enumerateSparseColumnAtIndex:(unsigned int)a0 block:(id /* block */)a1;
- (id)init;
- (id)payloadForTopic:(unsigned int)a0;
- (void).cxx_destruct;
- (void)addWeightedTopicScoreToBuffer:(float *)a0 countNonZeroComponentsInBuffer:(unsigned short *)a1 qid:(unsigned int)a2 score:(float)a3;
- (void)addBias:(float *)a0;
- (void)_enumerateSparseRowAtIndex:(unsigned int)a0 block:(id /* block */)a1;
- (id)QIDWeightsWithMappedTopicIdentifier:(id)a0;
- (void)applyFeatureNormalization:(float *)a0 vectorLength:(int)a1;
- (void)applyOutputActivation:(float *)a0;
- (void)applyFeatureSmoothing:(float *)a0 vectorLength:(int)a1;
- (id)initWithPath:(id)a0 mappingId:(id)a1 hyperparameters:(id)a2;
- (id)initWithPath:(id)a0 mappingId:(id)a1;
- (void)_applyScaling:(float *)a0 vectorLength:(int)a1 scalingType:(unsigned char)a2 scalingFactor:(float)a3;
- (BOOL)containsMappedTopic:(id)a0;
- (void)applyOutputScaling:(float *)a0 vectorLength:(int)a1;
- (void)applyFeatureScaling:(float *)a0 vectorLength:(int)a1;
- (void)_readHyperparameters:(id)a0;
- (void)addWeightedTopicScoreToBuffer:(float *)a0 qid:(unsigned int)a1 score:(float)a2;
- (void)applyOutputAttenuation:(float *)a0 nonzeroCounts:(unsigned short *)a1;

@end
