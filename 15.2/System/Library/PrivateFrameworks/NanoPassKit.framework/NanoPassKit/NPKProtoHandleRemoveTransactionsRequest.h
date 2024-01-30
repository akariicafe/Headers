@class NSMutableArray;

@interface NPKProtoHandleRemoveTransactionsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableArray *passIDs;

+ (Class)identifiersType;
+ (Class)passIDsType;

- (unsigned long long)identifiersCount;
- (void)clearIdentifiers;
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
- (void)addIdentifiers:(id)a0;
- (id)identifiersAtIndex:(unsigned long long)a0;
- (void)addPassIDs:(id)a0;
- (unsigned long long)passIDsCount;
- (void)clearPassIDs;
- (id)passIDsAtIndex:(unsigned long long)a0;

@end
