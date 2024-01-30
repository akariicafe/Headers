@class NSArray, NSDictionary, NSString, NARGlance, NARApplicationState;

@interface NARApplication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *infoPlist;
@property (retain, nonatomic) NSDictionary *localizedStrings;
@property (retain, nonatomic) NSDictionary *iTunesPlistStrings;
@property (retain, nonatomic) NSArray *appTags;
@property (nonatomic) unsigned long long sequenceNumber;
@property (copy, nonatomic) NSString *launchServicesBundleType;
@property (nonatomic) BOOL supportsForegroundApplication;
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) NSString *bundleName;
@property (readonly, nonatomic) NSDictionary *localizedBundleNames;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSDictionary *localizedDisplayNames;
@property (readonly, nonatomic) NSArray *supportedSchemes;
@property (readonly, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) NSString *itemName;
@property (readonly, nonatomic) NSArray *localizations;
@property (readonly, copy, nonatomic) NSString *parentApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) NARGlance *glance;
@property (retain, nonatomic) NARApplicationState *appState;

- (void).cxx_destruct;
- (id)objectForInfoDictionaryKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)objectForInfoDictionaryKey:(id)a0 localization:(id)a1;

@end
