@interface NEFilterPacketProvider : NEFilterProvider

@property (copy) id /* block */ packetHandler;

- (id)delayCurrentPacket:(id)a0;
- (void).cxx_destruct;
- (void)allowPacket:(id)a0;

@end
