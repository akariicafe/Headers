@class NSArray, NEIKEv2ConfigPayload;

@interface NEIKEv2InformationalPacket : NEIKEv2Packet {
    NSArray *_deletes;
    NEIKEv2ConfigPayload *_config;
}

+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;

@end
