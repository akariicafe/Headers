@class NSMutableArray, PBUnknownFields;

@interface GEOPDTransitTripStop : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_stopInfos;
}

@property (retain, nonatomic) NSMutableArray *stopInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)stopInfoType;
+ (id)transitTripStopForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addStopInfo:(id)a0;
- (unsigned long long)stopInfosCount;
- (void)clearStopInfos;
- (id)stopInfoAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
