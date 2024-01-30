@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *tags;

+ (Class)tagsType;

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
- (void)clearTags;
- (unsigned long long)tagsCount;
- (void)addTags:(id)a0;
- (id)tagsAtIndex:(unsigned long long)a0;

@end
