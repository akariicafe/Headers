@class NSMutableArray;

@interface NTPBItemsTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char maxArticlesShown : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL hasMaxArticlesShown;
@property (nonatomic) unsigned long long maxArticlesShown;

+ (Class)itemsType;

- (id)itemsAtIndex:(unsigned long long)a0;
- (unsigned long long)itemsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (void)addItems:(id)a0;
- (void)clearItems;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
