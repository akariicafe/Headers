@class NSMutableSet, MLCDevice, NSMutableArray;

@interface MLCDeviceGraph : NSObject

@property (readonly, retain, nonatomic) MLCDevice *device;
@property (retain, nonatomic) NSMutableArray *graphLayerList;
@property (weak, nonatomic) NSMutableSet *liveOutputs;
@property (weak, nonatomic) NSMutableSet *liveInputs;

+ (id)deviceGraphWithLayers:(id)a0 device:(id)a1;

- (void).cxx_destruct;
- (id)initDeviceGraphWithLayers:(id)a0 device:(id)a1;

@end
