@class GEOAdvisoryCard, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOAdvisoryItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAdvisoryCard *_advisoryCard;
    NSMutableArray *_analyticsMessageValues;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _incidentIndex;
    unsigned int _transitIncidentIndex;
    struct { unsigned char has_incidentIndex : 1; unsigned char has_transitIncidentIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_advisoryCard : 1; unsigned char read_analyticsMessageValues : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAdvisoryCard;
@property (retain, nonatomic) GEOAdvisoryCard *advisoryCard;
@property (nonatomic) BOOL hasIncidentIndex;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic) BOOL hasTransitIncidentIndex;
@property (nonatomic) unsigned int transitIncidentIndex;
@property (retain, nonatomic) NSMutableArray *analyticsMessageValues;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)analyticsMessageValueType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void)addAnalyticsMessageValue:(id)a0;
- (unsigned long long)analyticsMessageValuesCount;
- (void)clearAnalyticsMessageValues;
- (id)analyticsMessageValueAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
