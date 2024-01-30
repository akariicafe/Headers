@interface TVRMSSeekToPlaybackTimeMessage : PBCodable <NSCopying> {
    struct { unsigned char playbackTime : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic) BOOL hasPlaybackTime;
@property (nonatomic) int playbackTime;

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
