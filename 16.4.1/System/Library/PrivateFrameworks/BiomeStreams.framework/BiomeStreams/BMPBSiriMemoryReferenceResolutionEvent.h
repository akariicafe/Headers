@class NSString, NSMutableArray;

@interface BMPBSiriMemoryReferenceResolutionEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *entityMapElements;

+ (Class)entityMapElementsType;

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
- (void)addEntityMapElements:(id)a0;
- (void)clearEntityMapElements;
- (id)entityMapElementsAtIndex:(unsigned long long)a0;
- (unsigned long long)entityMapElementsCount;

@end
