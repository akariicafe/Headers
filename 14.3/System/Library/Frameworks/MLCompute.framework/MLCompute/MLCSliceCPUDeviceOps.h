@class NSArray;

@interface MLCSliceCPUDeviceOps : MLCCPUDeviceOps

@property (nonatomic) unsigned long long beginOffset;
@property (copy, nonatomic) NSArray *begin;
@property (copy, nonatomic) NSArray *count;
@property (copy, nonatomic) NSArray *stride;

+ (id)deviceOpsWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 weightsDeltaData:(id)a4 biasDeltaData:(id)a5 weightsMomentumData:(id)a6 biasMomentumData:(id)a7;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 weightsDeltaData:(id)a4 biasDeltaData:(id)a5 weightsMomentumData:(id)a6 biasMomentumData:(id)a7 betaDeltaData:(id)a8 gammaDeltaData:(id)a9 betaMomentumData:(id)a10 gammaMomentumData:(id)a11;

@end
