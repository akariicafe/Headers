@class NSString;

@interface BMPBAppClipLaunchEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasURLHash;
@property (retain, nonatomic) NSString *uRLHash;
@property (readonly, nonatomic) BOOL hasClipBundleID;
@property (retain, nonatomic) NSString *clipBundleID;
@property (readonly, nonatomic) BOOL hasAppBundleID;
@property (retain, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) BOOL hasWebAppBundleID;
@property (retain, nonatomic) NSString *webAppBundleID;
@property (readonly, nonatomic) BOOL hasLaunchReason;
@property (retain, nonatomic) NSString *launchReason;
@property (readonly, nonatomic) BOOL hasFullURL;
@property (retain, nonatomic) NSString *fullURL;
@property (readonly, nonatomic) BOOL hasReferrerURL;
@property (retain, nonatomic) NSString *referrerURL;
@property (readonly, nonatomic) BOOL hasReferrerBundleID;
@property (retain, nonatomic) NSString *referrerBundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
