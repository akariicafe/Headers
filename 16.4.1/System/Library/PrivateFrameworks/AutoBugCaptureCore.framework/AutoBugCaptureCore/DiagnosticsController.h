@class NSString, NSMutableDictionary, DiagnosticExtensionController, NSNumber;

@interface DiagnosticsController : NSObject {
    DiagnosticExtensionController *deCollector;
}

@property (retain, nonatomic) NSMutableDictionary *actionsDict;
@property (retain, nonatomic) NSMutableDictionary *settingsDict;
@property (retain, nonatomic) NSString *autoBugCapturePath;
@property (retain, nonatomic) NSNumber *autoBugCaptureGID;
@property (retain, nonatomic) NSNumber *autoBugCaptureUID;

+ (void)initialize;
+ (id)loggingStateCache;

- (BOOL)validateDiagnosticsConfiguration:(id)a0;
- (BOOL)_loadLoggingSupport;
- (void)raiseLoggingForActions:(id)a0 identifier:(id)a1;
- (void)consolidateLoggingLevelsIntoSet:(id)a0 withCurrentState:(id)a1;
- (id)consolidatedLogLevelSetsFromActions:(id)a0;
- (unsigned long long)collectDignosticExtensionFilesForDiagnosticCase:(id)a0 parameters:(id)a1 options:(id)a2 queue:(id)a3 reply:(id /* block */)a4;
- (BOOL)validateActionsDictionaryContent:(id)a0 identifier:(id)a1;
- (id)diagActionsForSignature:(id)a0;
- (void)applyLogLevelSets:(id)a0;
- (void)lowerLoggingForIdentifier:(id)a0;
- (id)diagExtensionCollector;
- (void)applyLogLevel:(id)a0 forIdentifier:(id)a1 logSettingType:(unsigned long long)a2;
- (id)actionsDictionaryForProcess:(id)a0 logLevel:(id)a1 diagnosticExtensions:(id)a2;
- (BOOL)validateSettingsNodeContents:(id)a0 identifier:(id)a1;
- (void)dealloc;
- (void)configureWithDiagnosticActions:(id)a0;
- (BOOL)validateSettingsDictionary:(id)a0;
- (id)diagActionsForSignature:(id)a0 commonActions:(id)a1;
- (id)diagnosticExtensionsForDiagnosticCase:(id)a0 enableCommonActions:(id)a1;
- (BOOL)validateOSLogPreferencesProtocol:(id)a0;
- (BOOL)validateActionsDictionary:(id)a0;
- (BOOL)validateSettingsNodeDictionary:(id)a0 identifier:(id)a1 isDefault:(BOOL)a2;
- (id)defaultsDictionaryWithAlwaysRunActions:(id)a0;
- (void)lowerLoggingForDiagnosticCase:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)raiseLoggingForDiagnosticCase:(id)a0;
- (void).cxx_destruct;

@end
