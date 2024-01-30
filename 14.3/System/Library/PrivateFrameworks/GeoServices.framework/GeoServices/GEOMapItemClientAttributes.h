@class PBUnknownFields, PBDataReader, GEOMapItemCorrectedLocationAttributes, GEOMapItemAddressBookAttributes, GEOMapItemRoutineAttributes;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapItemAddressBookAttributes *_addressBookAttributes;
    GEOMapItemCorrectedLocationAttributes *_correctedLocationAttributes;
    GEOMapItemRoutineAttributes *_routineAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_addressBookAttributes : 1; unsigned char read_correctedLocationAttributes : 1; unsigned char read_routineAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAddressBookAttributes;
@property (retain, nonatomic) GEOMapItemAddressBookAttributes *addressBookAttributes;
@property (readonly, nonatomic) BOOL hasRoutineAttributes;
@property (retain, nonatomic) GEOMapItemRoutineAttributes *routineAttributes;
@property (readonly, nonatomic) BOOL hasCorrectedLocationAttributes;
@property (retain, nonatomic) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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

@end
