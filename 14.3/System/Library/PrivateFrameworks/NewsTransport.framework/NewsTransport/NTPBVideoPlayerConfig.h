@class NSString;

@interface NTPBVideoPlayerConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosTitle;
@property (retain, nonatomic) NSString *discoverMoreVideosTitle;
@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosSubtitle;
@property (retain, nonatomic) NSString *discoverMoreVideosSubtitle;
@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosUrl;
@property (retain, nonatomic) NSString *discoverMoreVideosUrl;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
