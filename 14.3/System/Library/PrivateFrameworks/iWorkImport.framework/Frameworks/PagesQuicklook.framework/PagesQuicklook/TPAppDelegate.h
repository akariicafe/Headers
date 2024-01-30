@class TPAppPropertiesProvider;

@interface TPAppDelegate : TSABaseApplicationDelegate {
    BOOL _appDoneLaunching;
    BOOL _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) TPAppPropertiesProvider *tp_sharedPropertiesProvider;

+ (id)sharedDelegate;
+ (id)defaultFontForNewBasicDocumentsFontName;
+ (double)defaultFontForNewBasicDocumentsPointSize;

- (id)init;
- (void)dealloc;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)appChartPropertyOverrides;
- (BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (BOOL)textInspectorShowsMoreSubpane;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)applicationTemplateVariantsForLocale:(id)a0;
- (Class)documentRootClass;
- (void)registerSOSClassTypeMappings;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (id)equationEditorAPDID;
- (id)stringForEquationChoiceTitle;
- (id)stringForEquationChoiceBody;
- (id)stringForEquationChoiceUseEQKitButtonTitle;
- (void)p_localeChanged:(id)a0;
- (void)customizeHyperlinkViewController:(id)a0 documentRoot:(id)a1;
- (BOOL)supportsAutosizingTextboxes;
- (BOOL)supportsLinkedTextBoxes;
- (BOOL)imageGalleryCaptionsUsePlaceholderText;

@end
