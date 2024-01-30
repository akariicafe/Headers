@class GEOClientNetworkMetrics, PBUnknownFields;

@interface GEOClientMetrics : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOClientNetworkMetrics *_networkMetrics;
    int _offlineReason;
    int _responseSource;
    struct { unsigned char has_offlineReason : 1; unsigned char has_responseSource : 1; } _flags;
}

@property (nonatomic) BOOL hasResponseSource;
@property (nonatomic) int responseSource;
@property (readonly, nonatomic) BOOL hasNetworkMetrics;
@property (retain, nonatomic) GEOClientNetworkMetrics *networkMetrics;
@property (nonatomic) BOOL hasOfflineReason;
@property (nonatomic) int offlineReason;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (id)offlineReasonAsString:(int)a0;
- (id)description;
- (id)responseSourceAsString:(int)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (int)StringAsResponseSource:(id)a0;
- (id)initWithDictionary:(id)a0;
- (int)StringAsOfflineReason:(id)a0;

@end
