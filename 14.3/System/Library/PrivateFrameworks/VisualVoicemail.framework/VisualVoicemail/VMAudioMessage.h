@class NSData;

@interface VMAudioMessage : PBCodable <NSCopying> {
    struct { unsigned char protocolVersion : 1; } _has;
}

@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (readonly, nonatomic) BOOL hasAudioData;
@property (retain, nonatomic) NSData *audioData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
