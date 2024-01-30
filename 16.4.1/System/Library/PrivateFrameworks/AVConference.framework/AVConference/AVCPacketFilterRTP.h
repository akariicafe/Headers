@interface AVCPacketFilterRTP : AVCPacketFilter {
    unsigned int _SSRC;
}

@property (readonly) unsigned char type;

- (id)initWithIncomingSSRC:(unsigned int)a0 acceptPacketType:(unsigned char)a1;
- (BOOL)isMatchedPacket:(const void *)a0 size:(int)a1;
- (BOOL)isPayloadTypeMatched:(BOOL)a0;
- (BOOL)isRTCPPayload:(unsigned short)a0;

@end
