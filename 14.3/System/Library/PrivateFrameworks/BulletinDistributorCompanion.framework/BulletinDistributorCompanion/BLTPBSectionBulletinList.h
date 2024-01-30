@class NSString, NSMutableArray;

@interface BLTPBSectionBulletinList : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSMutableArray *bulletinIdentifiers;

+ (Class)bulletinIdentifierType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addBulletinIdentifier:(id)a0;
- (unsigned long long)bulletinIdentifiersCount;
- (void)clearBulletinIdentifiers;
- (id)bulletinIdentifierAtIndex:(unsigned long long)a0;

@end
