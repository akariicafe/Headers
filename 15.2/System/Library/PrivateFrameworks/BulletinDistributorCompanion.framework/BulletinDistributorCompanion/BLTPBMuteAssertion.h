@class NSMutableArray;

@interface BLTPBMuteAssertion : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; } _has;
}

@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (retain, nonatomic) NSMutableArray *sectionBulletinLists;

+ (Class)sectionBulletinListType;

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
- (void)addSectionBulletinList:(id)a0;
- (unsigned long long)sectionBulletinListsCount;
- (void)clearSectionBulletinLists;
- (id)sectionBulletinListAtIndex:(unsigned long long)a0;

@end
