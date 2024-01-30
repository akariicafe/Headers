@class NSArray;

@interface TRISystemInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEnrolledInBetaProgram;
@property (retain, nonatomic) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) BOOL logUserSettingsLanguageCode;
@property (nonatomic) BOOL logUserSettingsRegionCode;
@property (nonatomic) BOOL logUserKeyboardEnabledInputMode;

+ (id)info;
+ (id)loadSystemInfo;
+ (id)_persistentSystemInfoPath;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (id)systemInfoFromFile:(id)a0;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)_sysEnabledInputModeIdentifiers;
+ (BOOL)_sysIsProfileInstalledWithIdentifier:(id)a0;

- (BOOL)saveToFile:(id)a0;
- (BOOL)save;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initFromSystemWithFactorProvider:(id)a0;
- (id)initWithCoder:(id)a0;

@end
