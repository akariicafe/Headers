@class NSString;

@interface NTPBTocCellExposureArticleElement : PBCodable <NSCopying> {
    struct { unsigned char publisherArticleVersionInt64 : 1; unsigned char articleType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) int articleType;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (nonatomic) long long publisherArticleVersionInt64;

- (id)articleTypeAsString:(int)a0;
- (void).cxx_destruct;
- (int)StringAsArticleType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
