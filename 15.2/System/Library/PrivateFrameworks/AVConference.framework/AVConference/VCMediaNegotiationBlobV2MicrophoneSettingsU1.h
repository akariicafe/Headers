@class NSSet;

@interface VCMediaNegotiationBlobV2MicrophoneSettingsU1 : PBCodable <NSCopying> {
    struct { unsigned char payloads : 1; unsigned char rtpSSRC : 1; } _has;
}

@property (readonly, nonatomic) NSSet *audioPayloads;
@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) BOOL hasPayloads;
@property (nonatomic) unsigned int payloads;

+ (int)payloadFromFlag:(int)a0;
+ (int)flagFromPayload:(int)a0;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithSSRC:(unsigned int)a0 audioPayloads:(id)a1;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;
- (unsigned int)payloadBitmapWithAudioPayloads:(id)a0;

@end
