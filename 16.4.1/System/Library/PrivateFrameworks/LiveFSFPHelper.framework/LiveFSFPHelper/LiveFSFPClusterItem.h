@class NSURL, LiveFSFPExtensionHelper, NSDate, NSDictionary, NSFileProviderItemVersion, NSString, NSSet, NSPersonNameComponents, NSArray, NSData, NSNumber, UTType, NSError;

@interface LiveFSFPClusterItem : NSObject <NSFileProviderItem_Private>

@property (readonly, retain) LiveFSFPExtensionHelper *extension;
@property (readonly, copy) NSString *fp_domainIdentifier;
@property (readonly, copy) NSString *filename;
@property (readonly, copy) NSURL *fileURL;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly, copy) NSString *containerDisplayName;
@property (readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, copy) NSString *providerIdentifier;
@property (readonly, copy) NSString *sharingPermissions;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (readonly, copy) NSString *fp_spotlightSubDomainIdentifier;
@property (readonly, copy) NSString *fp_parentDomainIdentifier;
@property (readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property (readonly, copy) NSArray *conflictingVersions;
@property (readonly) BOOL fp_isContainer;
@property (readonly) BOOL fp_isContainerPristine;
@property (readonly) BOOL fp_isCloudDocsContainer;
@property (readonly, copy) NSString *fp_cloudContainerIdentifier;
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isTopLevelSharedItem) BOOL topLevelSharedItem;
@property (readonly, copy, nonatomic) NSData *quarantineBlob;
@property (getter=isSyncRoot) BOOL syncRoot;
@property (readonly, copy) NSString *fileSystemFilename;
@property (readonly, nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync;
@property (readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property (readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property (readonly, nonatomic) NSString *preformattedOwnerName;
@property (readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property (readonly) BOOL isCollaborationInvitation;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) struct NSFileProviderTypeAndCreator { unsigned int x0; unsigned int x1; } typeAndCreator;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long fileSystemFlags;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, copy, nonatomic) NSNumber *childItemCount;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, copy, nonatomic) NSData *tagData;
@property (readonly, copy, nonatomic) NSNumber *favoriteRank;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property (readonly, nonatomic, getter=isUploading) BOOL uploading;
@property (readonly, copy, nonatomic) NSError *uploadingError;
@property (readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *downloadingError;
@property (readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (readonly, nonatomic) NSData *versionIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (readonly, copy, nonatomic) NSString *symlinkTargetPath;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) long long contentPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithName:(id)a0 extension:(id)a1;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 extension:(id)a1;

@end
