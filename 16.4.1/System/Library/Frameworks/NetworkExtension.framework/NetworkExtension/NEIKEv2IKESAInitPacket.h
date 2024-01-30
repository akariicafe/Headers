@class NEIKEv2IKESAPayload, NEIKEv2NoncePayload, NEIKEv2KeyExchangePayload, NSArray, NEIKEv2NotifyPayload;

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet {
    NEIKEv2NotifyPayload *_cookie;
    NEIKEv2IKESAPayload *_sa;
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NoncePayload *_nonce;
    NSArray *_vendorIDs;
}

+ (BOOL)encryptPayloads;
+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;

@end
