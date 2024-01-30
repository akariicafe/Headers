@class NSString, BMPBHomeKitClientBase, NSMutableArray;

@interface BMPBHomeKitClientActionSetEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) BMPBHomeKitClientBase *base;
@property (readonly, nonatomic) BOOL hasActionSetUniqueIdentifier;
@property (retain, nonatomic) NSString *actionSetUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasActionSetType;
@property (retain, nonatomic) NSString *actionSetType;
@property (retain, nonatomic) NSMutableArray *associatedAccessoryUniqueIdentifiers;
@property (readonly, nonatomic) BOOL hasActionSetName;
@property (retain, nonatomic) NSString *actionSetName;
@property (readonly, nonatomic) BOOL hasHomeName;
@property (retain, nonatomic) NSString *homeName;

+ (Class)associatedAccessoryUniqueIdentifiersType;

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
- (void)addAssociatedAccessoryUniqueIdentifiers:(id)a0;
- (unsigned long long)associatedAccessoryUniqueIdentifiersCount;
- (void)clearAssociatedAccessoryUniqueIdentifiers;
- (id)associatedAccessoryUniqueIdentifiersAtIndex:(unsigned long long)a0;

@end
