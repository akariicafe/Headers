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
