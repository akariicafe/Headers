@interface NEFilterPacketProvider : NEFilterProvider

@property (copy) id /* block */ packetHandler;

- (void).cxx_destruct;
- (void)allowPacket:(id)a0;
- (id)delayCurrentPacket:(id)a0;

@end
