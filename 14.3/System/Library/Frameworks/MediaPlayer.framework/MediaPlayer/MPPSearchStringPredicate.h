@class NSString, NSMutableArray;

@interface MPPSearchStringPredicate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *properties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addProperties:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)propertiesCount;
- (void)clearProperties;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
