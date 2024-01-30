@class NSMutableArray;

@interface GEOETAServiceResponseSummary : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _responseUuid;
    NSMutableArray *_routeInfos;
    int _status;
    BOOL _resultsApplied;
    struct { unsigned char has_responseUuid : 1; unsigned char has_status : 1; unsigned char has_resultsApplied : 1; } _flags;
}

@property (nonatomic) BOOL hasResultsApplied;
@property (nonatomic) BOOL resultsApplied;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasResponseUuid;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } responseUuid;
@property (retain, nonatomic) NSMutableArray *routeInfos;

+ (Class)routeInfoType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addRouteInfo:(id)a0;
- (unsigned long long)routeInfosCount;
- (void)clearRouteInfos;
- (id)routeInfoAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
