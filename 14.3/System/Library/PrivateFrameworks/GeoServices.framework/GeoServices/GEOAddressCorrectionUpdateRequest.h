@class NSString, NSMutableArray, PBDataReader;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSString *_addressID;
    NSMutableArray *_addressResults;
    NSMutableArray *_significantLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _correctionStatus;
    struct { unsigned char has_correctionStatus : 1; unsigned char read_addressID : 1; unsigned char read_addressResults : 1; unsigned char read_significantLocations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasCorrectionStatus;
@property (nonatomic) int correctionStatus;
@property (retain, nonatomic) NSMutableArray *significantLocations;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSMutableArray *addressResults;

+ (Class)significantLocationType;
+ (Class)addressResultType;
+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (id)init;
- (unsigned int)requestTypeCode;
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
- (id)initWithDictionary:(id)a0;
- (void)addAddressResult:(id)a0;
- (void)addSignificantLocation:(id)a0;
- (unsigned long long)significantLocationsCount;
- (void)clearSignificantLocations;
- (id)significantLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)addressResultsCount;
- (void)clearAddressResults;
- (id)addressResultAtIndex:(unsigned long long)a0;
- (id)correctionStatusAsString:(int)a0;
- (int)StringAsCorrectionStatus:(id)a0;

@end
