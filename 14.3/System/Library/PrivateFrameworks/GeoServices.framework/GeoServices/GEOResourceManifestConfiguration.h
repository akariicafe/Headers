@class NSArray, NSString;

@interface GEOResourceManifestConfiguration : NSObject <NSSecureCoding> {
    NSArray *_tileSetOverrides;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *tileSetOverrides;
@property (nonatomic) unsigned int tileGroupIdentifier;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *osBuild;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *hardwareIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *applicationVersion;
@property (copy, nonatomic) NSString *environment;
@property (copy, nonatomic) NSString *dataDirectory;
@property (copy, nonatomic) NSString *urlTemplate;
@property (readonly, nonatomic) int defaultScale;
@property (readonly, nonatomic) BOOL requiresLegacyFormat;
@property (readonly, nonatomic) NSString *directorySuffix;

+ (id)defaultConfiguration;
+ (id)configurationWithPairedDevice:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_directorySuffixParameters;
- (id)manifestDictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isDefaultConfiguration;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
