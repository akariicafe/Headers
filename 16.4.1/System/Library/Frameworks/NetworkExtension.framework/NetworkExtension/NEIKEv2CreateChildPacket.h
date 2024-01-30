@class NEIKEv2ResponderTrafficSelectorPayload, NEIKEv2NoncePayload, NSArray, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2IKESAPayload, NEIKEv2KeyExchangePayload, NEIKEv2ChildSAPayload, NEIKEv2ConfigPayload;

@interface NEIKEv2CreateChildPacket : NEIKEv2Packet {
    NEIKEv2IKESAPayload *_ikeSA;
    NEIKEv2ChildSAPayload *_childSA;
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NoncePayload *_nonce;
    NEIKEv2ConfigPayload *_config;
    NEIKEv2InitiatorTrafficSelectorPayload *_tsi;
    NEIKEv2ResponderTrafficSelectorPayload *_tsr;
    NSArray *_vendorIDs;
}

+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;

@end
