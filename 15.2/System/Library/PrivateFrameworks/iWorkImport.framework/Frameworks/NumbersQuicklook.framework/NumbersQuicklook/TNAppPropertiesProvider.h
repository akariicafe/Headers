@class NSArray;

@interface TNAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, copy, nonatomic) NSArray *excelDocumentTypes;

- (id)applicationDisplayName;
- (id)cloudKitContainerIdentifier;
- (id)applicationName;
- (unsigned long long)applicationType;
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

@end
