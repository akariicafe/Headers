@class NSMutableArray;

@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying> {
    NSMutableArray *_mapKitCounts;
}

@property (retain, nonatomic) NSMutableArray *mapKitCounts;

+ (Class)mapKitCountsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)clearMapKitCounts;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (unsigned long long)mapKitCountsCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addMapKitCounts:(id)a0;
- (id)mapKitCountsAtIndex:(unsigned long long)a0;

@end
