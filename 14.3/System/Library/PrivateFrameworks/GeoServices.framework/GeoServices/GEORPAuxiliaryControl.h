@class GEORPWatchAuxiliaryControl, PBDataReader, GEORPCarPlayAuxiliaryControl;

@interface GEORPAuxiliaryControl : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPCarPlayAuxiliaryControl *_car;
    GEORPWatchAuxiliaryControl *_watch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_car : 1; unsigned char read_watch : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasWatch;
@property (retain, nonatomic) GEORPWatchAuxiliaryControl *watch;
@property (readonly, nonatomic) BOOL hasCar;
@property (retain, nonatomic) GEORPCarPlayAuxiliaryControl *car;

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
- (id)initWithDictionary:(id)a0;

@end
