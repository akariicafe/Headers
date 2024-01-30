@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage : MRProtocolMessage {
    unsigned long long _priority;
}

@property (readonly, nonatomic) _MRGameControllerMessageProtobuf *event;
@property (readonly, nonatomic) unsigned long long controllerID;

- (BOOL)shouldLog;
- (id)initWithGameControllerEvent:(id)a0 controllerID:(unsigned long long)a1;
- (unsigned long long)priority;
- (unsigned long long)type;

@end
