@class KNAppPropertiesProvider;

@interface KNAppDelegateBase : TSABaseApplicationDelegate {
    BOOL _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) KNAppPropertiesProvider *kn_sharedPropertiesProvider;

- (id)init;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (void)applicationDidFinishLaunching;
- (id)appChartPropertyOverrides;
- (BOOL)supportsShrinkTextToFit;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)applicationTemplateVariantsForLocale:(id)a0;
- (Class)documentRootClass;
- (double)mimimumAspectRatioForPreviewImage;
- (double)maximumAspectRatioForPreviewImage;
- (void)registerClassTypeMappings;
- (void)registerSOSClassTypeMappings;
- (void)registerAllowedElementKinds;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (id)equationEditorAPDID;
- (id)stringForEquationChoiceTitle;
- (id)stringForEquationChoiceBody;
- (id)stringForEquationChoiceUseEQKitButtonTitle;
- (id)defaultHyperlinkURLWithDocumentRoot:(id)a0;
- (BOOL)supportsPastingIntoGroups;
- (BOOL)supportsFreehandAnimationUI;
- (BOOL)supportsCommentsInMasters;
- (BOOL)sidebarPositionRespectsUserInterfaceLayoutDirection;

@end
