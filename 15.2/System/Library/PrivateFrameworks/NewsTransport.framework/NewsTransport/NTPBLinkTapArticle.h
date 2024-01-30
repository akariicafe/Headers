@class NSString;

@interface NTPBLinkTapArticle : PBCodable <NSCopying> {
    struct { unsigned char articleType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLinkUrl;
@property (retain, nonatomic) NSString *linkUrl;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) int articleType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)articleTypeAsString:(int)a0;
- (int)StringAsArticleType:(id)a0;

@end
