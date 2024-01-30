@class NSMutableArray;

@interface NPKProtoDisplayableEntitlementsForPassIdentifierResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entitlementsDatas;

+ (Class)entitlementsDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addEntitlementsData:(id)a0;
- (void)clearEntitlementsDatas;
- (id)entitlementsDataAtIndex:(unsigned long long)a0;
- (unsigned long long)entitlementsDatasCount;

@end
