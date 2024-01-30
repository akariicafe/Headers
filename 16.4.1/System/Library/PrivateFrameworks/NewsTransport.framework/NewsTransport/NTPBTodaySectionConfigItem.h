@class NTPBTodaySectionConfigWebEmbed, NTPBTodaySectionConfigArticle;

@interface NTPBTodaySectionConfigItem : PBCodable <NSCopying> {
    struct { unsigned char itemType : 1; } _has;
}

@property (nonatomic) BOOL hasItemType;
@property (nonatomic) int itemType;
@property (readonly, nonatomic) BOOL hasArticle;
@property (retain, nonatomic) NTPBTodaySectionConfigArticle *article;
@property (readonly, nonatomic) BOOL hasWebEmbed;
@property (retain, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
