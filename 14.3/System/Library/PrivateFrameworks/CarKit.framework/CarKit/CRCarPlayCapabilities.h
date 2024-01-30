@class NSString, NSValue;

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

+ (id)newCapabilitiesFromGlobalDomain;
+ (void)_resetCapabilitiesGlobalDomain;
+ (id)carPlayCapabilitiesCache;
+ (void)waitForCarCapabilitiesValues;
+ (id)fetchCarCapabilities;
+ (void)setCarPlayCapabilitiesCache:(id)a0;
+ (void)invalidateCarPlayCapabilitiesCache;

- (id)init;
- (void).cxx_destruct;
- (id)informativeText;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)persistCapabilitiesToGlobalDomain;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToCapabilities:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
