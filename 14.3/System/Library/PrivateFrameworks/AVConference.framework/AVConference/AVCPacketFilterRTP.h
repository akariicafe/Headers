@interface AVCPacketFilterRTP : AVCPacketFilter {
    unsigned int _SSRC;
    unsigned char _type;
}

- (BOOL)isMatchedPacket:(const void *)a0 size:(int)a1;
- (BOOL)isRTCPPayload:(unsigned short)a0;
- (BOOL)isPayloadTypeMatched:(BOOL)a0;
- (id)initWithIncomingSSRC:(unsigned int)a0 acceptPacketType:(unsigned char)a1;

@end
