@class NSMutableArray;

@interface GEOWiFiQualityNetworkSearchResult : PBCodable <NSCopying> {
    NSMutableArray *_matches;
}

@property (retain, nonatomic) NSMutableArray *matches;

+ (Class)matchesType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)matchesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)matchesCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addMatches:(id)a0;
- (void)clearMatches;

@end
