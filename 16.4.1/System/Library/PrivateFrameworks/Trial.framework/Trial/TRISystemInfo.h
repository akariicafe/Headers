@class NSArray, NSString;

@interface TRISystemInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEnrolledInBetaProgram;
@property (retain, nonatomic) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) BOOL logUserSettingsLanguageCode;
@property (nonatomic) BOOL logUserSettingsRegionCode;
@property (nonatomic) BOOL logUserKeyboardEnabledInputMode;
@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL hasAne;
@property (retain, nonatomic) NSString *aneVersion;

+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (id)info;
+ (id)_aneVersion;
+ (BOOL)_hasAne;
+ (id)loadSystemInfo;
+ (id)_persistentSystemInfoPath;
+ (id)_carrierBundleIdentifier;
+ (id)systemInfoFromFile:(id)a0;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (BOOL)_isSeedBuild;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)_carrierCountryIsoCode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)save;
- (BOOL)saveToFile:(id)a0;
- (id)initFromSystemWithFactorProvider:(id)a0;
- (void).cxx_destruct;

@end
