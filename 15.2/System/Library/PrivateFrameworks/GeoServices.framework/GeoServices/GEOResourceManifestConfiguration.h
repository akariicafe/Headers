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

+ (id)configurationWithPairedDevice:(id)a0;
+ (id)defaultConfiguration;

- (BOOL)isDefaultConfiguration;
- (void)encodeWithCoder:(id)a0;
- (id)manifestDictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)_directorySuffixParameters;

@end
