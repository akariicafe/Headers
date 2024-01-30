@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRGameControllerMessageProtobuf *event;
@property (readonly, nonatomic) unsigned long long controllerID;

- (id)initWithGameControllerEvent:(id)a0 controllerID:(unsigned long long)a1;
- (unsigned long long)type;
- (BOOL)shouldLog;

@end
