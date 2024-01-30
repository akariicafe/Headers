@class NSData, NSString;

@interface AWDWiFiOtaSystemInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char channel : 1; unsigned char channelWidth : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasBeaconInfo;
@property (retain, nonatomic) NSData *beaconInfo;
@property (readonly, nonatomic) BOOL hasSsid;
@property (retain, nonatomic) NSString *ssid;
@property (readonly, nonatomic) BOOL hasBssid;
@property (retain, nonatomic) NSString *bssid;
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
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasLocaleSource;
@property (retain, nonatomic) NSString *localeSource;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasChannelWidth;
@property (nonatomic) unsigned int channelWidth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
