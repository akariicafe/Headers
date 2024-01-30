@class NSString;

@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_bagProfile;
    NSString *_bagProfileVersion;
}

@property (class, readonly, nonatomic) ICClientInfo *defaultInfo;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *clientVersion;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion;
@property (readonly, copy, nonatomic) NSString *bagProfile;
@property (readonly, copy, nonatomic) NSString *bagProfileVersion;

+ (id)clientInfoForMusicKitRequestWithClientIdentifier:(id)a0 clientVersion:(id)a1;
+ (id)clientInfoForMusicKitRequestWithClientIdentifier:(id)a0 clientVersion:(id)a1 bundleIdentifier:(id)a2;
+ (id)_clientInfoForCloudDaemonOriginatedMusicKitRequestWithRequestingBundleIdentifier:(id)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSystemApplicationType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_clientInfoCopyWithClass:(Class)a0;

@end
