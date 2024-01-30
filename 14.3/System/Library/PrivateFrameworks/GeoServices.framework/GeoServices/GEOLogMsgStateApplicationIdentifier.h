@class NSString, PBDataReader;

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _appDarkMode;
    struct { unsigned char has_appDarkMode : 1; unsigned char read_appIdentifier : 1; unsigned char read_appMajorVersion : 1; unsigned char read_appMinorVersion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (retain, nonatomic) NSString *appMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;
@property (retain, nonatomic) NSString *appMinorVersion;
@property (nonatomic) BOOL hasAppDarkMode;
@property (nonatomic) BOOL appDarkMode;

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
