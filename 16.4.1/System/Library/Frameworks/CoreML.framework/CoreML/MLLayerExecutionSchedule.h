@class NSString;

@interface MLLayerExecutionSchedule : NSObject

@property (readonly, nonatomic) long long layerError;
@property (readonly, copy, nonatomic) NSString *layerName;
@property (readonly, nonatomic) unsigned long long preferredComputeUnit;
@property (readonly, copy, nonatomic) NSString *layerTypeName;
@property (readonly, nonatomic) unsigned long long supportedComputeUnits;
@property (readonly, nonatomic) long long layerIndex;

- (void).cxx_destruct;
- (id)initWithComputeUnits:(unsigned long long)a0 layerName:(id)a1 layerError:(long long)a2 layerTypeName:(id)a3 supportedComputeUnits:(unsigned long long)a4 layerIndex:(long long)a5;
- (id)initWithLayerError:(long long)a0;

@end
