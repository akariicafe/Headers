@class NSString, NSMutableArray;

@interface NTPBDeviceInfo : PBCodable <NSCopying> {
    struct { unsigned char deviceDstOffset : 1; unsigned char deviceUtcOffset : 1; unsigned char deviceDigestMode : 1; unsigned char deviceTokenEnv : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (retain, nonatomic) NSString *devicePushToken;
@property (readonly, nonatomic) BOOL hasDeviceType;
@property (retain, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) BOOL hasDeviceTimezone;
@property (retain, nonatomic) NSString *deviceTimezone;
@property (nonatomic) BOOL hasDeviceTokenEnv;
@property (nonatomic) int deviceTokenEnv;
@property (retain, nonatomic) NSMutableArray *devicePreferredLanguages;
@property (readonly, nonatomic) BOOL hasDeviceOsVersion;
@property (retain, nonatomic) NSString *deviceOsVersion;
@property (nonatomic) BOOL hasDeviceUtcOffset;
@property (nonatomic) long long deviceUtcOffset;
@property (nonatomic) BOOL hasDeviceDstOffset;
@property (nonatomic) long long deviceDstOffset;
@property (readonly, nonatomic) BOOL hasDeviceAppVersion;
@property (retain, nonatomic) NSString *deviceAppVersion;
@property (readonly, nonatomic) BOOL hasDeviceAppBundleId;
@property (retain, nonatomic) NSString *deviceAppBundleId;
@property (nonatomic) BOOL hasDeviceDigestMode;
@property (nonatomic) int deviceDigestMode;

+ (Class)devicePreferredLanguageType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)devicePreferredLanguageAtIndex:(unsigned long long)a0;
- (void)addDevicePreferredLanguage:(id)a0;
- (void)clearDevicePreferredLanguages;
- (unsigned long long)devicePreferredLanguagesCount;

@end
