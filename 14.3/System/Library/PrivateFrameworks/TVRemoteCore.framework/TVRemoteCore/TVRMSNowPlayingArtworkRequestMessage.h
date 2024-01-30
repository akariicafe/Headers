@class NSString;

@interface TVRMSNowPlayingArtworkRequestMessage : PBCodable <NSCopying> {
    struct { unsigned char compressionQuality : 1; unsigned char height : 1; unsigned char width : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArtworkIdentifier;
@property (retain, nonatomic) NSString *artworkIdentifier;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) unsigned int height;
@property (nonatomic) BOOL hasCompressionQuality;
@property (nonatomic) float compressionQuality;

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
