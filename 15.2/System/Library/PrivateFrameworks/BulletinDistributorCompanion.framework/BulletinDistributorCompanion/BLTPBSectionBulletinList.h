@class NSString, NSMutableArray;

@interface BLTPBSectionBulletinList : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSMutableArray *bulletinIdentifiers;

+ (Class)bulletinIdentifierType;

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
- (void)addBulletinIdentifier:(id)a0;
- (unsigned long long)bulletinIdentifiersCount;
- (void)clearBulletinIdentifiers;
- (id)bulletinIdentifierAtIndex:(unsigned long long)a0;

@end
