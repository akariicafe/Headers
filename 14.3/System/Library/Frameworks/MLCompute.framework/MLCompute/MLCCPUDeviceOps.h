@class MLCTensor, NSArray, NSData, _MLCCPULayer, NSMutableArray, NSNumber;

@interface MLCCPUDeviceOps : MLCDeviceOps

@property (retain, nonatomic) NSData *weightsDeltaDataBytes;
@property (retain, nonatomic) NSData *biasDeltaDataBytes;
@property (retain, nonatomic) NSMutableArray *weightsDeltaDataBytesArray;
@property (retain, nonatomic) NSMutableArray *biasDeltaDataBytesArray;
@property (retain, nonatomic) NSData *betaDeltaDataBytes;
@property (retain, nonatomic) NSData *gammaDeltaDataBytes;
@property (retain, nonatomic) NSMutableArray *weightsMomentumDataBytes;
@property (retain, nonatomic) NSMutableArray *biasMomentumDataBytes;
@property (retain, nonatomic) NSMutableArray *weightsMomentumDataBytesArray;
@property (retain, nonatomic) NSMutableArray *biasMomentumDataBytesArray;
@property (retain, nonatomic) NSMutableArray *betaMomentumDataBytes;
@property (retain, nonatomic) NSMutableArray *gammaMomentumDataBytes;
@property (retain, nonatomic) _MLCCPULayer *layer;
@property (readonly, nonatomic) int deviceOpType;
@property (nonatomic) unsigned long long sourceStride;
@property (nonatomic) unsigned long long sourceStrideSecondary;
@property (nonatomic) unsigned long long sourceStrideTertiary;
@property (nonatomic) unsigned long long resultStride;
@property (nonatomic) unsigned long long sourceDataOffset;
@property (nonatomic) unsigned long long secondarySourceDataOffset;
@property (nonatomic) unsigned long long tertiarySourceDataOffset;
@property (nonatomic) unsigned long long resultDataOffset;
@property (nonatomic) BOOL inferenceOnly;
@property (readonly, nonatomic) NSData *params;
@property (retain, nonatomic) NSData *fusedPrimitiveParams;
@property (readonly, retain, nonatomic) NSArray *inDeltaData;
@property (readonly, retain, nonatomic) NSArray *outDeltaData;
@property (readonly, retain, nonatomic) NSData *weightsDeltaData;
@property (readonly, retain, nonatomic) NSData *biasDeltaData;
@property (readonly, retain, nonatomic) NSMutableArray *weightsMomentumData;
@property (readonly, retain, nonatomic) NSMutableArray *biasMomentumData;
@property (nonatomic) BOOL computeWeightsAndBiasOnly;
@property (retain, nonatomic) NSData *betaDeltaData;
@property (retain, nonatomic) NSData *gammaDeltaData;
@property (retain, nonatomic) NSMutableArray *betaMomentumData;
@property (retain, nonatomic) NSMutableArray *gammaMomentumData;
@property (retain, nonatomic) MLCTensor *movingMean;
@property (retain, nonatomic) MLCTensor *movingVariance;
@property (nonatomic) void *BNNSFilter;
@property (nonatomic) BOOL isFusedBNNSFilter;
@property (nonatomic) int paddingPolicy;
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForResultGradientTensor;
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
@property (nonatomic) float lossWeight;
@property (nonatomic) BOOL binaryOperation;
@property (nonatomic) BOOL hasBias;
@property (nonatomic) unsigned long long softmaxDimension;
@property (nonatomic) BOOL transposeX;
@property (nonatomic) BOOL transposeY;
@property (nonatomic) BOOL leftIsAWeight;
@property (nonatomic) BOOL rightIsAWeight;
@property (copy, nonatomic) NSNumber *paddingIndex;
@property (copy, nonatomic) NSArray *embeddingParams;
@property (nonatomic) BOOL scaleGradientByFrequency;

+ (id)deviceOpsWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 weightsDeltaData:(id)a4 biasDeltaData:(id)a5 weightsMomentumData:(id)a6 biasMomentumData:(id)a7;
+ (id)deviceOpsWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3;
+ (id)deviceOpsWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 betaDeltaData:(id)a4 gammaDeltaData:(id)a5 betaMomentumData:(id)a6 gammaMomentumData:(id)a7;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 weightsDeltaData:(id)a4 biasDeltaData:(id)a5 weightsMomentumData:(id)a6 biasMomentumData:(id)a7 betaDeltaData:(id)a8 gammaDeltaData:(id)a9 betaMomentumData:(id)a10 gammaMomentumData:(id)a11;
- (id)initWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 weightsDeltaData:(id)a4 biasDeltaData:(id)a5 weightsMomentumData:(id)a6 biasMomentumData:(id)a7;
- (id)initWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 betaDeltaData:(id)a4 gammaDeltaData:(id)a5 betaMomentumData:(id)a6 gammaMomentumData:(id)a7;

@end
