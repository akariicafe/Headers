@interface GEOMultiTabsState : PBCodable <NSCopying> {
    unsigned int _currentTabIndex;
    unsigned int _numberOfTabsOpen;
    struct { unsigned char has_currentTabIndex : 1; unsigned char has_numberOfTabsOpen : 1; } _flags;
}

@property (nonatomic) BOOL hasNumberOfTabsOpen;
@property (nonatomic) unsigned int numberOfTabsOpen;
@property (nonatomic) BOOL hasCurrentTabIndex;
@property (nonatomic) unsigned int currentTabIndex;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
