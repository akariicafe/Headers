@class PBDataReader, NSString, GEOLocation, NSMutableArray, PBUnknownFields;

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_externalTransitStationCodes;
    NSString *_sourceId;
    GEOLocation *_transactionLocation;
    double _transactionTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_transactionTimestamp : 1; unsigned char read_unknownFields : 1; unsigned char read_externalTransitStationCodes : 1; unsigned char read_sourceId : 1; unsigned char read_transactionLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTransactionTimestamp;
@property (nonatomic) double transactionTimestamp;
@property (readonly, nonatomic) BOOL hasTransactionLocation;
@property (retain, nonatomic) GEOLocation *transactionLocation;
@property (readonly, nonatomic) BOOL hasSourceId;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSMutableArray *externalTransitStationCodes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)externalTransitStationCodeType;
+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addExternalTransitStationCode:(id)a0;
- (unsigned long long)externalTransitStationCodesCount;
- (void)clearExternalTransitStationCodes;
- (id)externalTransitStationCodeAtIndex:(unsigned long long)a0;

@end
