@class PBDataReader, GEOFormattedString, PBUnknownFields;

@interface GEOPlaceFormattedString : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_contactHome;
    GEOFormattedString *_contactOther;
    GEOFormattedString *_contactWork;
    GEOFormattedString *_custom;
    GEOFormattedString *_home;
    GEOFormattedString *_pointOfInterest;
    GEOFormattedString *_streetAddress;
    GEOFormattedString *_unknown;
    GEOFormattedString *_work;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_contactHome : 1; unsigned char read_contactOther : 1; unsigned char read_contactWork : 1; unsigned char read_custom : 1; unsigned char read_home : 1; unsigned char read_pointOfInterest : 1; unsigned char read_streetAddress : 1; unsigned char read_unknown : 1; unsigned char read_work : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasHome;
@property (retain, nonatomic) GEOFormattedString *home;
@property (readonly, nonatomic) BOOL hasWork;
@property (retain, nonatomic) GEOFormattedString *work;
@property (readonly, nonatomic) BOOL hasContactWork;
@property (retain, nonatomic) GEOFormattedString *contactWork;
@property (readonly, nonatomic) BOOL hasContactHome;
@property (retain, nonatomic) GEOFormattedString *contactHome;
@property (readonly, nonatomic) BOOL hasContactOther;
@property (retain, nonatomic) GEOFormattedString *contactOther;
@property (readonly, nonatomic) BOOL hasPointOfInterest;
@property (retain, nonatomic) GEOFormattedString *pointOfInterest;
@property (readonly, nonatomic) BOOL hasStreetAddress;
@property (retain, nonatomic) GEOFormattedString *streetAddress;
@property (readonly, nonatomic) BOOL hasUnknown;
@property (retain, nonatomic) GEOFormattedString *unknown;
@property (readonly, nonatomic) BOOL hasCustom;
@property (retain, nonatomic) GEOFormattedString *custom;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
