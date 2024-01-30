@class NSArray;

@interface MLCANEDeviceOps : MLCDeviceOps

@property (readonly, nonatomic) int deviceOpType;
@property (retain, nonatomic) NSArray *units;
@property (readonly, retain, nonatomic) id params;

+ (id)deviceOpsWithType:(int)a0 params:(id)a1;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 params:(id)a1;

@end
