@class NSString;

@interface NTPBArticleListTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArticleListID;
@property (retain, nonatomic) NSString *articleListID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
