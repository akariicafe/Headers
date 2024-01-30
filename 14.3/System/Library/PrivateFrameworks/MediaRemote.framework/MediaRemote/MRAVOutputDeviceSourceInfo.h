@class NSString;

@interface MRAVOutputDeviceSourceInfo : NSObject

@property (readonly, nonatomic) NSString *routingContextUID;
@property (readonly, nonatomic) BOOL multipleBuiltInDevices;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRoutingContextUID:(id)a0 multipleBuiltInDevices:(BOOL)a1;

@end
