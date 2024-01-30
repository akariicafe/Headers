@class NSArray, NSString, INIntentDescription;

@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource> {
    INIntentDescription *_intentDescription;
    NSArray *_supportedAppIdentifiers;
}

@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) NSArray *supportedIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEnumerator;

- (long long)intentCategory;
- (id)intentDescription;
- (id)appIdentifier;
- (void).cxx_destruct;
- (id)slots;
- (void)dealloc;
- (id)localizedAppName;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (BOOL)requiresRemoteExecution;
- (id)copyWithSerializedParameters:(id)a0;
- (id)actionForAppIdentifier:(id)a0;
- (id)supportedAppIdentifiers;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)displayableAppIdentifierForBundleIdentifier:(id)a0;
- (id)localizedDisplayableAppNameForBundleIdentifier:(id)a0;
- (void)selectedAppDidChange;
- (id)appSection;
- (id)selectedAppNotSupportedError;

@end
