@class NSSet, NSMutableArray, NSMutableDictionary;

@interface VCVideoRuleCollections : NSObject {
    int _payload;
    unsigned char _transportType;
    unsigned char _encodingType;
}

@property (readonly) NSMutableArray *supportedPayloads;
@property (readonly) NSMutableDictionary *rules;
@property (readonly, nonatomic) BOOL isEncodeSupported;
@property (readonly, nonatomic) BOOL isDecodeSupported;
@property (readonly, nonatomic) NSSet *supportedTransportTypes;

+ (id)newCorrectedVideoRules:(id)a0 payload:(int)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void)addSupportedPayload:(int)a0;
- (void)addVideoRules:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;
- (void)appendVideoRules:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;
- (id)filterRules:(id)a0 byBitrateRule:(id)a1;
- (id)getVideoRulesForTransport:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2;
- (BOOL)isPayloadSupported:(int)a0;
- (void)limitRulesFromVideoRules:(int)a0 frameHeight:(int)a1 videoRules:(id)a2;
- (void)limitVideoRulesToMaxWidth:(int)a0 maxHeight:(int)a1 transportType:(unsigned char)a2;
- (void)removeVideoRulesWithWidth:(int)a0 height:(int)a1 transportType:(unsigned char)a2 encodingType:(unsigned char)a3;
- (id)supportedVideoRulesForBitrate:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;
- (id)supportedVideoRulesSizesForBitrate:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;
- (id)supportedVideoRulesSyncForTransportType:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2;
- (id)supportedVideoSizesForKey:(id)a0;
- (id)videoRulesCollectionsByRemovingPayload:(int)a0 andPayload:(int)a1 removeCellular:(BOOL)a2;

@end
