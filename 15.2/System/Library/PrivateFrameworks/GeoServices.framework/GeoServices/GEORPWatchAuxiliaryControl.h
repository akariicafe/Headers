@class NSString, PBDataReader;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_hardwareIdentifier;
    NSString *_osBuild;
    NSString *_osVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_hardwareIdentifier : 1; unsigned char read_osBuild : 1; unsigned char read_osVersion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasHardwareIdentifier;
@property (retain, nonatomic) NSString *hardwareIdentifier;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) BOOL hasOsBuild;
@property (retain, nonatomic) NSString *osBuild;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
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
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
