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
