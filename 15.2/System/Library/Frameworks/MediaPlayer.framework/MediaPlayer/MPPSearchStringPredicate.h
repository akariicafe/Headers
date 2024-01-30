@class NSString, NSMutableArray;

@interface MPPSearchStringPredicate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *properties;

- (void)addProperties:(id)a0;
- (unsigned long long)propertiesCount;
- (void)clearProperties;
- (BOOL)readFrom:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
