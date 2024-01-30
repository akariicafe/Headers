@class NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDeviceDescription : NSObject

@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) NSString *uid;

- (void).cxx_destruct;
- (id)initWithDeviceType:(unsigned int)a0 deviceSubtype:(unsigned int)a1 uid:(id)a2;

@end
