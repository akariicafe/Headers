@class NSMutableArray;

@interface NTKProtoSharedCollections : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *collections;

+ (Class)collectionsType;
+ (id)protoBufferFromSharedCollections:(id)a0;

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
- (unsigned long long)collectionsCount;
- (void)clearCollections;
- (void)addCollections:(id)a0;
- (id)collectionsAtIndex:(unsigned long long)a0;
- (id)sharedCollectionsDictionary;

@end
