@class NSString;

@interface MLLayerExecutionSchedule : NSObject

@property (copy, nonatomic) NSString *layerName;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long layerError;

- (id)initWithLayerError:(long long)a0;
- (id)initWithScheduledDevice:(id)a0 layerName:(id)a1 layerError:(long long)a2;
- (void).cxx_destruct;

@end
