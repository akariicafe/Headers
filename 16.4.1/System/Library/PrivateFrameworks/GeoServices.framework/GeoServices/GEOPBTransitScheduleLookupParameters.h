@class NSData, PBUnknownFields;

@interface GEOPBTransitScheduleLookupParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _lineId;
    unsigned long long _referenceTripId;
    NSData *_routingParameters;
    unsigned long long _transitId;
    BOOL _includeAllDirectionNames;
    BOOL _includeAllHeadsigns;
    struct { unsigned char has_lineId : 1; unsigned char has_referenceTripId : 1; unsigned char has_transitId : 1; unsigned char has_includeAllDirectionNames : 1; unsigned char has_includeAllHeadsigns : 1; } _flags;
}

@property (nonatomic) BOOL hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) BOOL hasTransitId;
@property (nonatomic) unsigned long long transitId;
@property (nonatomic) BOOL hasReferenceTripId;
@property (nonatomic) unsigned long long referenceTripId;
@property (readonly, nonatomic) BOOL hasRoutingParameters;
@property (retain, nonatomic) NSData *routingParameters;
@property (nonatomic) BOOL hasIncludeAllDirectionNames;
@property (nonatomic) BOOL includeAllDirectionNames;
@property (nonatomic) BOOL hasIncludeAllHeadsigns;
@property (nonatomic) BOOL includeAllHeadsigns;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
