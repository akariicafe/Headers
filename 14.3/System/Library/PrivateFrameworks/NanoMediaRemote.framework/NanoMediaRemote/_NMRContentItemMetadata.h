@class NSString;

@interface _NMRContentItemMetadata : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char isAutoPlayItem : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) NSString *artist;
@property (readonly, nonatomic) BOOL hasAlbum;
@property (retain, nonatomic) NSString *album;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasIsAutoPlayItem;
@property (nonatomic) BOOL isAutoPlayItem;

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
