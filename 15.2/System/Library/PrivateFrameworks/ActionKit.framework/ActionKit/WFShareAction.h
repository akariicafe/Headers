@class NSString;
@protocol NSObject;

@interface WFShareAction : WFAction <WFDynamicEnumerationDataSource>

@property (retain, nonatomic) id<NSObject> supportedExtensionsChangedObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;
+ (id)sharedEnumerator;

- (id)selectedIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)enumeration:(id)a0 accessoryImageForPossibleState:(id)a1;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)overrideExtensionIdentifier;
- (void)showUIWithArchivedItems:(id)a0 isContentManaged:(BOOL)a1 extensionBundleIdentifier:(id)a2;
- (id)anyExtensionBundleIdentifierForIdentifier:(id)a0 extensionPointIdentifier:(id)a1 isContentManaged:(BOOL)a2 error:(id *)a3;
- (id)localizedDisplayableAppNameForBundleIdentifier:(id)a0;
- (id)accessoryIconForBundleIdentifier:(id)a0;

@end
