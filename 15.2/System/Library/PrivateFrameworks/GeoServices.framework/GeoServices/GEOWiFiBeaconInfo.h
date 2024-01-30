@class NSData, NSString, PBDataReader;

@interface GEOWiFiBeaconInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSData *_beaconInfo;
    NSString *_wpsConfigMethods;
    NSString *_wpsDeviceNameData;
    NSString *_wpsDeviceNameElement;
    NSString *_wpsManufacturerElement;
    NSString *_wpsModelName;
    NSString *_wpsModelNumber;
    NSString *_wpsPrimaryDeviceTypeCategory;
    NSString *_wpsPrimaryDeviceTypeSubCategory;
    NSString *_wpsResponseType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_beaconInfo : 1; unsigned char read_wpsConfigMethods : 1; unsigned char read_wpsDeviceNameData : 1; unsigned char read_wpsDeviceNameElement : 1; unsigned char read_wpsManufacturerElement : 1; unsigned char read_wpsModelName : 1; unsigned char read_wpsModelNumber : 1; unsigned char read_wpsPrimaryDeviceTypeCategory : 1; unsigned char read_wpsPrimaryDeviceTypeSubCategory : 1; unsigned char read_wpsResponseType : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasBeaconInfo;
@property (retain, nonatomic) NSData *beaconInfo;
@property (readonly, nonatomic) BOOL hasWpsResponseType;
@property (retain, nonatomic) NSString *wpsResponseType;
@property (readonly, nonatomic) BOOL hasWpsManufacturerElement;
@property (retain, nonatomic) NSString *wpsManufacturerElement;
@property (readonly, nonatomic) BOOL hasWpsModelName;
@property (retain, nonatomic) NSString *wpsModelName;
@property (readonly, nonatomic) BOOL hasWpsModelNumber;
@property (retain, nonatomic) NSString *wpsModelNumber;
@property (readonly, nonatomic) BOOL hasWpsPrimaryDeviceTypeCategory;
@property (retain, nonatomic) NSString *wpsPrimaryDeviceTypeCategory;
@property (readonly, nonatomic) BOOL hasWpsPrimaryDeviceTypeSubCategory;
@property (retain, nonatomic) NSString *wpsPrimaryDeviceTypeSubCategory;
@property (readonly, nonatomic) BOOL hasWpsDeviceNameElement;
@property (retain, nonatomic) NSString *wpsDeviceNameElement;
@property (readonly, nonatomic) BOOL hasWpsDeviceNameData;
@property (retain, nonatomic) NSString *wpsDeviceNameData;
@property (readonly, nonatomic) BOOL hasWpsConfigMethods;
@property (retain, nonatomic) NSString *wpsConfigMethods;

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
