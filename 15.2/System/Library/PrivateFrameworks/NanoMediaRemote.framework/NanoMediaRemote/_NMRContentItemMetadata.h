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
