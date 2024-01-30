@class NSString;

@interface AWDNWL2Report : PBCodable <NSCopying> {
    struct { unsigned char cellularBand : 1; unsigned char cellularBandInfo : 1; unsigned char cellularBandwidth : 1; unsigned char cellularBars : 1; unsigned char cellularLqm : 1; unsigned char cellularMcc : 1; unsigned char cellularMnc : 1; unsigned char cellularPid : 1; unsigned char cellularPowerCostDownload : 1; unsigned char cellularPowerCostUpload : 1; unsigned char cellularRadioTechnology : 1; unsigned char cellularTac : 1; unsigned char cellularUarfcn : 1; unsigned char wifiLqm : 1; unsigned char wifiRadioTechnology : 1; unsigned char wifiRssi : 1; unsigned char cellularKnownGood : 1; unsigned char wifiKnownGood : 1; } _has;
}

@property (nonatomic) BOOL hasCellularLqm;
@property (nonatomic) int cellularLqm;
@property (nonatomic) BOOL hasCellularPowerCostDownload;
@property (nonatomic) int cellularPowerCostDownload;
@property (nonatomic) BOOL hasCellularPowerCostUpload;
@property (nonatomic) int cellularPowerCostUpload;
@property (nonatomic) BOOL hasCellularKnownGood;
@property (nonatomic) BOOL cellularKnownGood;
@property (nonatomic) BOOL hasCellularRadioTechnology;
@property (nonatomic) int cellularRadioTechnology;
@property (nonatomic) BOOL hasWifiLqm;
@property (nonatomic) int wifiLqm;
@property (nonatomic) BOOL hasWifiRssi;
@property (nonatomic) int wifiRssi;
@property (nonatomic) BOOL hasWifiKnownGood;
@property (nonatomic) BOOL wifiKnownGood;
@property (nonatomic) BOOL hasWifiRadioTechnology;
@property (nonatomic) int wifiRadioTechnology;
@property (nonatomic) BOOL hasCellularMnc;
@property (nonatomic) int cellularMnc;
@property (nonatomic) BOOL hasCellularMcc;
@property (nonatomic) int cellularMcc;
@property (nonatomic) BOOL hasCellularUarfcn;
@property (nonatomic) int cellularUarfcn;
@property (nonatomic) BOOL hasCellularPid;
@property (nonatomic) int cellularPid;
@property (nonatomic) BOOL hasCellularBandInfo;
@property (nonatomic) int cellularBandInfo;
@property (readonly, nonatomic) BOOL hasCellularCellType;
@property (retain, nonatomic) NSString *cellularCellType;
@property (nonatomic) BOOL hasCellularBandwidth;
@property (nonatomic) int cellularBandwidth;
@property (nonatomic) BOOL hasCellularTac;
@property (nonatomic) int cellularTac;
@property (nonatomic) BOOL hasCellularBars;
@property (nonatomic) int cellularBars;
@property (nonatomic) BOOL hasCellularBand;
@property (nonatomic) int cellularBand;

- (int)StringAsCellularRadioTechnology:(id)a0;
- (id)cellularPowerCostDownloadAsString:(int)a0;
- (int)StringAsCellularPowerCostDownload:(id)a0;
- (id)cellularPowerCostUploadAsString:(int)a0;
- (int)StringAsCellularPowerCostUpload:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)wifiRadioTechnologyAsString:(int)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (id)cellularRadioTechnologyAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (int)StringAsCellularBand:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsWifiRadioTechnology:(id)a0;
- (id)cellularBandAsString:(int)a0;

@end
