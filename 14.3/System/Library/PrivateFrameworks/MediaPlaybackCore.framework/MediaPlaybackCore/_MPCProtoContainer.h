@class _MPCProtoContainerIdentifierSet, NSMutableArray, NSString;

@interface _MPCProtoContainer : PBCodable <NSCopying> {
    struct { unsigned char containerType : 1; } _has;
}

@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) int containerType;
@property (readonly, nonatomic) BOOL hasIdentifierSet;
@property (retain, nonatomic) _MPCProtoContainerIdentifierSet *identifierSet;
@property (retain, nonatomic) NSMutableArray *items;
@property (readonly, nonatomic) BOOL hasPlayActivityFeatureName;
@property (retain, nonatomic) NSString *playActivityFeatureName;

+ (Class)itemType;

- (void)addItem:(id)a0;
- (unsigned long long)itemsCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearItems;
- (BOOL)readFrom:(id)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
