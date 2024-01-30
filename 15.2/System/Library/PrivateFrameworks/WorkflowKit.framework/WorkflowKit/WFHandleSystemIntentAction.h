@class NSSet, NSString, INIntentDescription, NSArray, WFAppInstalledResource, INIntentDescriptor;

@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource> {
    INIntentDescription *_intentDescription;
    NSArray *_supportedAppIdentifiers;
    WFAppInstalledResource *_appResource;
}

@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) NSSet *supportedIdentifiers;
@property (readonly, nonatomic) NSSet *launchableIdentifiers;
@property (retain, nonatomic) INIntentDescriptor *intentDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEnumerator;

- (id)appSection;
- (id)intentDescription;
- (long long)intentCategory;
- (id)icon;
- (void).cxx_destruct;
- (id)slots;
- (void)dealloc;
- (id)intentClassName;
- (id)localizedAppName;
- (id)enumeration:(id)a0 accessoryImageForPossibleState:(id)a1;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)appResource;
- (void)setAppResource:(id)a0;
- (id)supportedAppIdentifiers;
- (id)copyWithSerializedParameters:(id)a0;
- (id)actionForAppIdentifier:(id)a0;
- (void)selectedAppDidChange;
- (id)customAppNameForBundleIdentifier:(id)a0;
- (id)customImageForBundleIdentifier:(id)a0;
- (id)displayableAppIdentifier;
- (id)launchableAppIdentifier;
- (id)accessoryIcon;
- (id)selectedAppNotSupportedError;
- (id)intentDescriptorWithIntentClassName:(id)a0 launchableBundleId:(id)a1;
- (id)intentDescriptorFromParameterState;
- (id)launchableAppIdentifiers;
- (BOOL)shouldBeIncludedInAppsList;

@end
