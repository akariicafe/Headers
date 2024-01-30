@class NSData;

@interface VMAudioMessage : PBCodable <NSCopying> {
    struct { unsigned char protocolVersion : 1; } _has;
}

@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (readonly, nonatomic) BOOL hasAudioData;
@property (retain, nonatomic) NSData *audioData;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
