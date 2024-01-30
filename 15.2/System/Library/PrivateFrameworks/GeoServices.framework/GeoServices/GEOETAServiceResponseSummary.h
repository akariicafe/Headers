@class NSMutableArray;

@interface GEOETAServiceResponseSummary : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _responseUuid;
    NSMutableArray *_routeInfos;
    int _status;
    BOOL _resultsApplied;
    struct { unsigned char has_responseUuid : 1; unsigned char has_status : 1; unsigned char has_resultsApplied : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
