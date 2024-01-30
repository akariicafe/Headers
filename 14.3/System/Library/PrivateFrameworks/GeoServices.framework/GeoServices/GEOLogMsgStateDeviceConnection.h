@class NSString, PBDataReader;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_deviceCarrierName;
    NSString *_deviceCountryCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _cellularDataState;
    int _deviceNetworkConnectivity;
    struct { unsigned char has_cellularDataState : 1; unsigned char has_deviceNetworkConnectivity : 1; unsigned char read_deviceCarrierName : 1; unsigned char read_deviceCountryCode : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasDeviceNetworkConnectivity;
@property (nonatomic) int deviceNetworkConnectivity;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceCarrierName;
@property (retain, nonatomic) NSString *deviceCarrierName;
@property (nonatomic) BOOL hasCellularDataState;
@property (nonatomic) int cellularDataState;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsCellularDataState:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (int)StringAsDeviceNetworkConnectivity:(id)a0;
- (id)cellularDataStateAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)deviceNetworkConnectivityAsString:(int)a0;

@end
