@class NSArray, NSString, _MLCANEModel, _ANERequest, NSMutableArray, _MLCANEPlistBuilder;

@interface MLCANEDeviceOps : MLCDeviceOps

@property (readonly, nonatomic) int deviceOpType;
@property (retain, nonatomic) NSArray *units;
@property (readonly, retain, nonatomic) id params;
@property (retain, nonatomic) NSString *procedureName;
@property (nonatomic) unsigned long long procedureIndex;
@property (retain, nonatomic) _MLCANEModel *model;
@property (retain, nonatomic) _ANERequest *request;
@property (readonly, nonatomic) NSMutableArray *constantTensors;
@property (retain, nonatomic) _MLCANEPlistBuilder *plistBuilder;

+ (id)deviceOpsWithType:(int)a0 params:(id)a1;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 params:(id)a1;

@end
