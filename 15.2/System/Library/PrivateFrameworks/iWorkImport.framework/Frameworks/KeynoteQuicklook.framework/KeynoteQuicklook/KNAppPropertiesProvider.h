@class NSArray;

@interface KNAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, nonatomic) NSArray *powerPointDocumentTypes;

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
- (unsigned long long)webVideoRequiredDocumentWriteVersion;

@end
