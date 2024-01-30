@class NSString, PBDataReader;

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_deviceInputLocale;
    NSString *_deviceOutputLocale;
    NSString *_deviceSettingsLocale;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_deviceInputLocale : 1; unsigned char read_deviceOutputLocale : 1; unsigned char read_deviceSettingsLocale : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDeviceSettingsLocale;
@property (retain, nonatomic) NSString *deviceSettingsLocale;
@property (readonly, nonatomic) BOOL hasDeviceInputLocale;
@property (retain, nonatomic) NSString *deviceInputLocale;
@property (readonly, nonatomic) BOOL hasDeviceOutputLocale;
@property (retain, nonatomic) NSString *deviceOutputLocale;

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
- (void).cxx_destruct;

@end
