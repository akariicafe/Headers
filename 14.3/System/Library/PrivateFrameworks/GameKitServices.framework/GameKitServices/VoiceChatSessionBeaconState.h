@interface VoiceChatSessionBeaconState : NSObject {
    struct tagVoiceChatBeacon { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *lastReceivedBeacon;
}

@property (nonatomic) unsigned int sentState;
@property (nonatomic) unsigned int receivedState;
@property (nonatomic) BOOL needsSend;
@property (nonatomic) unsigned int typeToSend;

- (id)init;
- (void)dealloc;
- (struct tagVoiceChatBeacon { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)lastReceivedBeacon;
- (void)setLastReceivedBeacon:(struct tagVoiceChatBeacon { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0;

@end
