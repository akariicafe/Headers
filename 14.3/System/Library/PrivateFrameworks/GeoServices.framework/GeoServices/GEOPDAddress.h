@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDAddress : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedAddress;
    NSMutableArray *_spokenNavigationAddress;
    NSMutableArray *_spokenStructuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _knownAccuracy;
    struct { unsigned char has_knownAccuracy : 1; unsigned char read_unknownFields : 1; unsigned char read_localizedAddress : 1; unsigned char read_spokenNavigationAddress : 1; unsigned char read_spokenStructuredAddress : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *localizedAddress;
@property (retain, nonatomic) NSMutableArray *spokenNavigationAddress;
@property (retain, nonatomic) NSMutableArray *spokenStructuredAddress;
@property (nonatomic) BOOL hasKnownAccuracy;
@property (nonatomic) int knownAccuracy;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)spokenStructuredAddressType;
+ (Class)spokenNavigationAddressType;
+ (Class)localizedAddressType;
+ (BOOL)isValid:(id)a0;

- (void)addLocalizedAddress:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addSpokenStructuredAddress:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSpokenNavigationAddress;
- (id)initWithData:(id)a0;
- (unsigned long long)spokenStructuredAddressCount;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)spokenStructuredAddressAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)localizedAddressCount;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)localizedAddressAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearSpokenStructuredAddress;
- (id)knownAccuracyAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearLocalizedAddress;
- (id)spokenNavigationAddressAtIndex:(unsigned long long)a0;
- (int)StringAsKnownAccuracy:(id)a0;
- (void)addSpokenNavigationAddress:(id)a0;
- (unsigned long long)spokenNavigationAddressCount;

@end
