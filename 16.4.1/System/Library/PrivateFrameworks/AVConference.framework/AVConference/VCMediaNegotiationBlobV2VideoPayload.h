@class NSArray;

@interface VCMediaNegotiationBlobV2VideoPayload : PBCodable <NSCopying> {
    struct { unsigned char decodeFormats : 1; unsigned char encodeFormats : 1; unsigned char parameterSet : 1; unsigned char videoPayload : 1; } _has;
}

@property (readonly, nonatomic) NSArray *encodeVideoRules;
@property (readonly, nonatomic) NSArray *decodeVideoRules;
@property (readonly, nonatomic) int payload;
@property (readonly, nonatomic) unsigned int videoParameterSupport;
@property (nonatomic) BOOL hasVideoPayload;
@property (nonatomic) unsigned int videoPayload;
@property (nonatomic) BOOL hasParameterSet;
@property (nonatomic) unsigned int parameterSet;
@property (nonatomic) BOOL hasEncodeFormats;
@property (nonatomic) unsigned int encodeFormats;
@property (nonatomic) BOOL hasDecodeFormats;
@property (nonatomic) unsigned int decodeFormats;

+ (int)payloadWithRTPPayload:(int)a0;
+ (int)rtpPayloadWithPayload:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithPayload:(int)a0 encodeVideoRules:(id)a1 decodeVideoRules:(id)a2 videoParameterSupport:(unsigned int)a3;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;
- (BOOL)setupEncode:(BOOL)a0 videoRules:(id)a1;
- (void)setupVideoParameterSupport:(unsigned int)a0;
- (id)videoRulesWithBitmap:(unsigned int)a0;

@end
