@interface ATXNotificationsPBAggregateData : PBCodable <NSCopying> {
    struct { unsigned char appsAllowed : 1; unsigned char appsAllowedThird : 1; unsigned char appsDenied : 1; unsigned char appsDeniedThird : 1; unsigned char appsInstalled : 1; unsigned char appsInstalledThird : 1; unsigned char appsLockscreen : 1; unsigned char appsLockscreenThird : 1; } _has;
}

@property (nonatomic) BOOL hasAppsInstalled;
@property (nonatomic) int appsInstalled;
@property (nonatomic) BOOL hasAppsAllowed;
@property (nonatomic) int appsAllowed;
@property (nonatomic) BOOL hasAppsDenied;
@property (nonatomic) int appsDenied;
@property (nonatomic) BOOL hasAppsLockscreen;
@property (nonatomic) int appsLockscreen;
@property (nonatomic) BOOL hasAppsInstalledThird;
@property (nonatomic) int appsInstalledThird;
@property (nonatomic) BOOL hasAppsAllowedThird;
@property (nonatomic) int appsAllowedThird;
@property (nonatomic) BOOL hasAppsDeniedThird;
@property (nonatomic) int appsDeniedThird;
@property (nonatomic) BOOL hasAppsLockscreenThird;
@property (nonatomic) int appsLockscreenThird;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
