@class TNAppPropertiesProvider;

@interface TNAppDelegateBase : TSABaseApplicationDelegate

@property (class, readonly, nonatomic) TNAppPropertiesProvider *tn_sharedPropertiesProvider;

- (id)init;
- (void)applicationDidFinishLaunching:(id)a0;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)appChartPropertyOverrides;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)applicationTemplateVariantsForLocale:(id)a0;
- (Class)documentRootClass;
- (void)registerClassTypeMappings;
- (void)registerSOSClassTypeMappings;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (id)equationEditorAPDID;
- (id)stringForEquationChoiceTitle;
- (id)stringForEquationChoiceBody;
- (id)stringForEquationChoiceUseEQKitButtonTitle;
- (void)configureSharedCode;
- (Class)documentViewControllerClass;

@end
