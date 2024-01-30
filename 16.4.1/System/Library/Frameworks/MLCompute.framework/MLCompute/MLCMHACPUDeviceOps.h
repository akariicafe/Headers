@class NSData, NSArray, NSMutableArray;

@interface MLCMHACPUDeviceOps : MLCCPUDeviceOps

@property (nonatomic) BOOL hasAttnBias;
@property (nonatomic) BOOL hasKeyMask;
@property (nonatomic) BOOL hasAttnMask;
@property (retain, nonatomic) NSData *keyMask;
@property (retain, nonatomic) NSData *attnMask;
@property (nonatomic) unsigned long long keyMaskStride;
@property (nonatomic) unsigned long long backpropCacheSize;
@property (retain, nonatomic) NSData *backpropCacheData;
@property (retain, nonatomic) NSArray *attnBiasDeltaData;
@property (retain, nonatomic) NSMutableArray *weightsMomentumDeltaDataArray;
@property (retain, nonatomic) NSMutableArray *biasMomentumDeltaDataArray;

+ (id)deviceOpsWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 weightsDeltaData:(id)a4 biasDeltaData:(id)a5 weightsMomentumData:(id)a6 biasMomentumData:(id)a7;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 weightsDeltaData:(id)a4 biasDeltaData:(id)a5 weightsMomentumData:(id)a6 biasMomentumData:(id)a7 betaDeltaData:(id)a8 gammaDeltaData:(id)a9 betaMomentumData:(id)a10 gammaMomentumData:(id)a11;

@end
