@class GEOClientNetworkMetrics, PBUnknownFields;

@interface GEOClientMetrics : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOClientNetworkMetrics *_networkMetrics;
    double _queuedTime;
    int _responseSource;
    struct { unsigned char has_queuedTime : 1; unsigned char has_responseSource : 1; } _flags;
}

@property (nonatomic) BOOL hasResponseSource;
@property (nonatomic) int responseSource;
@property (readonly, nonatomic) BOOL hasNetworkMetrics;
@property (retain, nonatomic) GEOClientNetworkMetrics *networkMetrics;
@property (nonatomic) BOOL hasQueuedTime;
@property (nonatomic) double queuedTime;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (int)StringAsResponseSource:(id)a0;
- (id)responseSourceAsString:(int)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
