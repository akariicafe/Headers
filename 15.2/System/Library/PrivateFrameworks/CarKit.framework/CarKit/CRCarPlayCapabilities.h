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

+ (id)fetchCarCapabilities;
+ (void)invalidateCarPlayCapabilitiesCache;
+ (void)_resetCapabilitiesGlobalDomain;
+ (void)setCarPlayCapabilitiesCache:(id)a0;
+ (id)newCapabilitiesFromGlobalDomain;
+ (id)carPlayCapabilitiesCache;
+ (void)waitForCarCapabilitiesValues;

- (id)informativeText;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToCapabilities:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)persistCapabilitiesToGlobalDomain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
