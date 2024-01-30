@class NSString, NSMutableArray;

@interface NTPBTelemetry : PBCodable <NSCopying> {
    struct { unsigned char appBuild : 1; unsigned char contentEnvironment : 1; unsigned char osInstallVariant : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) BOOL hasDevicePlatform;
@property (retain, nonatomic) NSString *devicePlatform;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) BOOL hasAppVersion;
@property (retain, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL hasAppBuild;
@property (nonatomic) long long appBuild;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL hasCarrier;
@property (retain, nonatomic) NSString *carrier;
@property (readonly, nonatomic) BOOL hasMobileCountryCode;
@property (retain, nonatomic) NSString *mobileCountryCode;
@property (readonly, nonatomic) BOOL hasMobileNetworkCode;
@property (retain, nonatomic) NSString *mobileNetworkCode;
@property (readonly, nonatomic) BOOL hasOsCountryCode;
@property (retain, nonatomic) NSString *osCountryCode;
@property (nonatomic) BOOL hasOsInstallVariant;
@property (nonatomic) int osInstallVariant;
@property (nonatomic) BOOL hasContentEnvironment;
@property (nonatomic) int contentEnvironment;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (retain, nonatomic) NSMutableArray *networkEventGroups;
@property (readonly, nonatomic) BOOL hasAppBuildNumber;
@property (retain, nonatomic) NSString *appBuildNumber;

+ (Class)networkEventGroupsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addNetworkEventGroups:(id)a0;
- (int)StringAsOsInstallVariant:(id)a0;
- (void)clearNetworkEventGroups;
- (id)networkEventGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)networkEventGroupsCount;
- (id)osInstallVariantAsString:(int)a0;

@end
