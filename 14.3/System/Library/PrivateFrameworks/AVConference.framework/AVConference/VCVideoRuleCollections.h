@class NSMutableArray, NSMutableDictionary;

@interface VCVideoRuleCollections : NSObject {
    int _payload;
    unsigned char _transportType;
    unsigned char _encodingType;
}

@property (readonly) NSMutableArray *supportedPayloads;
@property (readonly) NSMutableDictionary *rules;

+ (id)newCorrectedVideoRules:(id)a0 payload:(int)a1;

- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPayloadSupported:(int)a0;
- (void)addSupportedPayload:(int)a0;
- (void)addVideoRules:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;
- (id)getVideoRulesForTransport:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2;
- (id)supportedVideoRulesForBitrate:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;
- (void)appendVideoRules:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;
- (void)limitVideoRulesToMaxWidth:(int)a0 maxHeight:(int)a1 transportType:(unsigned char)a2;
- (void)removeVideoRulesWithWidth:(int)a0 height:(int)a1 transportType:(unsigned char)a2 encodingType:(unsigned char)a3;
- (id)supportedVideoSizesForKey:(id)a0;
- (id)filterRules:(id)a0 byBitrateRule:(id)a1;
- (id)supportedVideoRulesSyncForTransportType:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2;
- (void)limitRulesFromVideoRules:(int)a0 frameHeight:(int)a1 videoRules:(id)a2;
- (id)supportedVideoRulesSizesForBitrate:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;

@end
