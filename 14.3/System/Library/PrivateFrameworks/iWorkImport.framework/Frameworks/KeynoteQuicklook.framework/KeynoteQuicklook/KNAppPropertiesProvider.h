@class NSArray;

@interface KNAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, nonatomic) NSArray *powerPointDocumentTypes;

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
- (unsigned long long)webVideoRequiredDocumentWriteVersion;

@end
