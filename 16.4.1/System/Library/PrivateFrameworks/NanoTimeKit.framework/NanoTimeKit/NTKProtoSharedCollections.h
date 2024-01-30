@class NSMutableArray;

@interface NTKProtoSharedCollections : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *collections;

+ (Class)collectionsType;
+ (id)protoBufferFromSharedCollections:(id)a0;

- (unsigned long long)collectionsCount;
- (id)collectionsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)clearCollections;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addCollections:(id)a0;
- (id)sharedCollectionsDictionary;

@end
