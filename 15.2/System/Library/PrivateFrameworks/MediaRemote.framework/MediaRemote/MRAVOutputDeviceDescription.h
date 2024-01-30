@class NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDeviceDescription : NSObject

@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *composedTypeDescription;
@property (readonly, nonatomic) NSString *modelID;

- (id)initWithDeviceType:(unsigned int)a0 deviceSubtype:(unsigned int)a1 uid:(id)a2;
- (id)initWithDeviceType:(unsigned int)a0 deviceSubtype:(unsigned int)a1 uid:(id)a2 name:(id)a3;
- (id)initWithDeviceType:(unsigned int)a0 deviceSubtype:(unsigned int)a1 uid:(id)a2 name:(id)a3 modelID:(id)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
