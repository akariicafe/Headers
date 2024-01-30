@interface GEOLogMsgStateDeviceSettings : PBCodable <NSCopying> {
    BOOL _deviceDarkMode;
    BOOL _isAltAccountPairedDevice;
    struct { unsigned char has_deviceDarkMode : 1; unsigned char has_isAltAccountPairedDevice : 1; } _flags;
}

@property (nonatomic) BOOL hasDeviceDarkMode;
@property (nonatomic) BOOL deviceDarkMode;
@property (nonatomic) BOOL hasIsAltAccountPairedDevice;
@property (nonatomic) BOOL isAltAccountPairedDevice;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
