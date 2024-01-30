@class NSString, NSMutableDictionary, NSDictionary, NSSet;

@interface OSASystemConfiguration : OSAProxyConfiguration {
    BOOL _appleInternal;
    BOOL _carrierInstall;
    BOOL _multiUserMode;
    NSMutableDictionary *_submissionMetadata;
    NSString *_pairedWatchOS;
    NSDictionary *_logConfig;
    NSSet *_logBlacklist;
    NSDictionary *_submissionParams;
    NSDictionary *_whitelistedDomains;
    NSString *_pathRoot;
    NSString *_pathContainerRoot;
    NSString *_pathSubmission;
    NSString *_pathPreferences;
    NSString *_pathDiagnostics;
    NSString *_pathCATasking;
    NSString *_pathAWDTasking;
}

@property (readonly) BOOL optInApple;
@property (readonly) BOOL optIn3rdParty;
@property (readonly) BOOL appleInternal;
@property (readonly) BOOL carrierInstall;
@property (readonly) BOOL multiUserMode;
@property (readonly) NSMutableDictionary *submissionMetadata;
@property (copy) NSString *pathRoot;
@property (readonly) NSString *pathContainerRoot;
@property (readonly) NSString *pathSubmission;
@property (readonly) NSString *pathPreferences;
@property (readonly) NSString *pathDiagnostics;
@property (readonly) NSString *pathCATasking;
@property (readonly) NSString *pathAWDTasking;

+ (id)sharedInstance;
+ (id)ensureUsablePath:(id)a0 component:(id)a1 options:(id)a2;
+ (void)ensureConformanceOfFile:(int)a0;

- (id)productVersion;
- (void)saveToPath:(id)a0;
- (id)productName;
- (id)logPathForType:(id)a0 at:(double)a1 options:(id)a2;
- (BOOL)isProxy;
- (id)productBuildString;
- (id)serialNumber;
- (BOOL)isConfigEnabled:(id)a0;
- (void).cxx_destruct;
- (id)getLogBlacklist;
- (BOOL)usesLegacySubmission:(id)a0;
- (id)logExt:(id)a0;
- (BOOL)isWhitelisted:(id)a0 forDomain:(id)a1;
- (id)osTrain;
- (id)seedGroup;
- (id)createReportMetadata:(id)a0 with:(id)a1 at:(double)a2 usingOptions:(id)a3;
- (id)internalKey;
- (id)crashReporterKey;
- (id)currentTaskingIDByRouting;
- (id)getPrefsKey:(id)a0 forDomain:(id)a1 withOptions:(id)a2;
- (id)automatedContextURL;
- (id)experimentGroup;
- (id)systemId;
- (BOOL)setPrefsKey:(id)a0 value:(id)a1 forDomain:(id)a2 withSync:(BOOL)a3;
- (id)automatedDeviceGroup;
- (id)productReleaseString;
- (id)pairedWatchOS;
- (id)uiCountryCode;
- (id)assembleMetadataAt:(double)a0 withOptions:(unsigned int)a1;
- (id)submissionParam:(id)a0;
- (id)pathSubmissionForOwner:(id)a0;
- (id)releaseType;
- (id)modelCode;
- (id)logPath;
- (id)getTaskingKey:(id)a0;
- (void)plumbEmail:(id)a0;
- (id)getPropsForLogType:(id)a0;
- (void)sysVersionData;
- (id)buildVersion;
- (id)logPrefix:(id)a0;
- (id)awdReporterKey;
- (id)targetAudience;
- (id)productNameVersionBuildString;
- (id)identifier;
- (void)onceConfig;

@end
