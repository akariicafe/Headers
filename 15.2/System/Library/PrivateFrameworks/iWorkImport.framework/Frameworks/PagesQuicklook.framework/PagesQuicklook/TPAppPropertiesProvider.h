@class NSArray;

@interface TPAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, nonatomic) NSArray *iBADocumentTypes;
@property (readonly, nonatomic) NSArray *wordDocumentTypes;
@property (readonly, nonatomic) NSArray *textDocumentTypes;
@property (readonly, nonatomic) NSArray *rtfDocumentTypes;

- (id)applicationDisplayName;
- (id)cloudKitContainerIdentifier;
- (id)applicationName;
- (unsigned long long)applicationType;
- (void).cxx_destruct;
- (id)documentTypeDisplayName;
- (id)templateTypeDisplayName;
- (id)appChartPropertyOverrides;
- (id)nativeDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)nativeSFFDocumentType;
- (id)importableDocumentTypes;
- (id)applicationTemplateVariantsForLocale:(id)a0;
- (Class)documentRootClass;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)cloudKitSyncContainerIdentifier;
- (id)bladerunnerContainerIdentifier;
- (BOOL)supportsTabNavigationOfCanvasObjects;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)a0;

@end
