@class NSString;

@interface SPProtoAudioFilePlayerItemSetCurrentTime : PBCodable <NSCopying> {
    struct { unsigned char currentTime : 1; } _has;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasCurrentTime;
@property (nonatomic) double currentTime;

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
- (id)sockPuppetMessage;

@end
