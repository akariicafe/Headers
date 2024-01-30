@class NSString, GEOLocation, NSMutableArray, PBDataReader;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    NSMutableArray *_address;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    struct { unsigned char has_numberOfVisitsBucketSize : 1; unsigned char has_statusCode : 1; unsigned char read_addressID : 1; unsigned char read_addressLocation : 1; unsigned char read_address : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) BOOL hasAddressLocation;
@property (retain, nonatomic) GEOLocation *addressLocation;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (nonatomic) BOOL hasNumberOfVisitsBucketSize;
@property (nonatomic) unsigned int numberOfVisitsBucketSize;
@property (retain, nonatomic) NSMutableArray *address;

+ (BOOL)isValid:(id)a0;
+ (Class)addressType;

- (id)initWithData:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)addressAtIndex:(unsigned long long)a0;
- (int)StringAsStatusCode:(id)a0;
- (void)addAddress:(id)a0;
- (unsigned long long)addressCount;
- (void)clearAddress;
- (id)statusCodeAsString:(int)a0;

@end
