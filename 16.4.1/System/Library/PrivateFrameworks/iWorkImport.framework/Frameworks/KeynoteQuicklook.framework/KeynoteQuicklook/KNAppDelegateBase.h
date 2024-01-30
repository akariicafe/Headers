@class KNAppPropertiesProvider;

@interface KNAppDelegateBase : TSABaseApplicationDelegate {
    BOOL _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) KNAppPropertiesProvider *kn_sharedPropertiesProvider;

- (id)init;
- (BOOL)supportsRTL;
- (void)applicationDidFinishLaunching;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (BOOL)supportsShrinkTextToFit;
- (id)equationEditorAPDID;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (void)registerAllowedElementKinds;
- (void)registerClassTypeMappings;
- (void)registerDrawableInfoClassMapping;
- (void)registerSOSClassTypeMappings;
- (BOOL)sidebarPositionRespectsUserInterfaceLayoutDirection;
- (BOOL)supportsCommentsInMasters;
- (BOOL)supportsFreehandAnimationUI;
- (BOOL)supportsImageGalleryHyperlinks;
- (BOOL)supportsMovieHyperlinks;
- (BOOL)supportsPastingIntoGroups;
- (id)universalPreviewImageNameForDocumentType:(id)a0;

@end
