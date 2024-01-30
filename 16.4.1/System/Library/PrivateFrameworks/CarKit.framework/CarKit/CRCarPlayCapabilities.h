@class NSString, NSValue, NSDictionary;

@interface CRCarPlayCapabilities : NSObject <NSSecureCoding>

@property (class, copy, nonatomic) NSString *capabilitiesIdentifier;
@property (class, copy, nonatomic) NSString *capabilitiesVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSString *version;
@property (nonatomic) BOOL persisted;
@property (nonatomic) unsigned long long disabledFeature;
@property (nonatomic) long long nowPlayingAlbumArtMode;
@property (retain, nonatomic) NSValue *viewAreaInsets;
@property (retain, nonatomic) NSValue *dashboardRoundedCorners;
@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (void)_resetCapabilitiesGlobalDomain;
+ (id)newCapabilitiesFromGlobalDomain;
+ (void)waitForCarCapabilitiesValuesWithReply:(id /* block */)a0;
+ (void)setCarPlayCapabilitiesCache:(id)a0;
+ (void)invalidateCarPlayCapabilitiesCache;
+ (id)fetchCarCapabilities;
+ (id)carPlayCapabilitiesCache;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCapabilities:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)description;
- (id)informativeText;
- (void).cxx_destruct;
- (void)persistCapabilitiesToGlobalDomain;

@end
