@class NSData;

@interface VCMediaNegotiationBlobV2CodecFeatures : PBCodable <NSCopying> {
    struct { unsigned char audioFeatures : 1; } _has;
}

@property (readonly, nonatomic) BOOL allowAudioRecording;
@property (nonatomic) BOOL hasAudioFeatures;
@property (nonatomic) unsigned int audioFeatures;
@property (readonly, nonatomic) BOOL hasVideoFeatures;
@property (retain, nonatomic) NSData *videoFeatures;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithAllowAudioRecording:(BOOL)a0 videoFeatures:(id)a1;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;

@end
