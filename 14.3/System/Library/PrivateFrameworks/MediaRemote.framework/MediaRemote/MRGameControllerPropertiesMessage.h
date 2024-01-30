@class _MRGameControllerPropertiesProtobuf;

@interface MRGameControllerPropertiesMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRGameControllerPropertiesProtobuf *properties;
@property (readonly, nonatomic) unsigned long long controllerID;

- (id)initWithGameControllerProperties:(id)a0 controllerID:(unsigned long long)a1;
- (unsigned long long)type;

@end
