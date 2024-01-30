@class NSArray, NEIKEv2EncryptedPayload, NEIKEv2IKESPI;

@interface NEIKEv2Packet : NSObject <NEPrettyDescription> {
    BOOL _decrypted;
    BOOL _isFragmented;
    BOOL _isInbound;
    BOOL _isResponse;
    BOOL _isInitiator;
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    int _messageID;
    NSArray *_packetDatagrams;
    NSArray *_rawPayloads;
    NEIKEv2IKESPI *_initiatorSPI;
    NEIKEv2IKESPI *_responderSPI;
    NEIKEv2EncryptedPayload *_encryptedPayload;
    NSArray *_customPayloads;
    NSArray *_notifications;
}

@property (readonly) BOOL decrypted;
@property (readonly) BOOL isFragmented;
@property (readonly) unsigned int fragmentNumber;
@property (readonly) unsigned int totalFragments;

+ (BOOL)encryptPayloads;
+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (void)filloutPayloads;
- (id)copyShortDescription;
- (void)gatherPayloads;

@end
