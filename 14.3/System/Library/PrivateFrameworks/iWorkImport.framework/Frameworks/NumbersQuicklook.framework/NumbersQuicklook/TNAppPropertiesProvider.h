@class NSArray;

@interface TNAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, copy, nonatomic) NSArray *excelDocumentTypes;

- (unsigned long long)applicationType;
- (id)applicationDisplayName;
- (id)applicationName;
- (id)cloudKitContainerIdentifier;
- (id)documentTypeDisplayName;
- (id)templateTypeDisplayName;
- (id)nativeDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)nativeSFFDocumentType;
- (id)importableDocumentTypes;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)cloudKitSyncContainerIdentifier;
- (id)bladerunnerContainerIdentifier;

@end
