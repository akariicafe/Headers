@class PBDataReader, NSString, GEOLatLng, GEOAddress, PBUnknownFields;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_correctedAddressSecondaryStreetLine;
    GEOAddress *_correctedAddress;
    GEOLatLng *_correctedCoordinate;
    NSString *_customLabel;
    double _lastUpdateDate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _hasSubmittedRAP;
    struct { unsigned char has_lastUpdateDate : 1; unsigned char has_hasSubmittedRAP : 1; unsigned char read_unknownFields : 1; unsigned char read_correctedAddressSecondaryStreetLine : 1; unsigned char read_correctedAddress : 1; unsigned char read_correctedCoordinate : 1; unsigned char read_customLabel : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCorrectedCoordinate;
@property (retain, nonatomic) GEOLatLng *correctedCoordinate;
@property (readonly, nonatomic) BOOL hasCorrectedAddress;
@property (retain, nonatomic) GEOAddress *correctedAddress;
@property (readonly, nonatomic) BOOL hasCorrectedAddressSecondaryStreetLine;
@property (retain, nonatomic) NSString *correctedAddressSecondaryStreetLine;
@property (readonly, nonatomic) BOOL hasCustomLabel;
@property (retain, nonatomic) NSString *customLabel;
@property (nonatomic) BOOL hasLastUpdateDate;
@property (nonatomic) double lastUpdateDate;
@property (nonatomic) BOOL hasHasSubmittedRAP;
@property (nonatomic) BOOL hasSubmittedRAP;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
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
