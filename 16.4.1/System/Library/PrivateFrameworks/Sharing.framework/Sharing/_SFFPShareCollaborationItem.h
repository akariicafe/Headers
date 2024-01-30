@class NSUUID, SFCollaborationCloudSharingResult, NSURL, NSArray, NSItemProvider, NSString, SFCollaborationMetadata, SFCollaborationShareOptions, NSError, LPLinkMetadata, NSNumber;

@interface _SFFPShareCollaborationItem : SFCollaborationItem <SFCollaborationFileURLItem>

@property (retain, nonatomic) NSURL *sendCopyRepresentationURL;
@property (copy, nonatomic) NSURL *managedFileURL;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isLocalStorage;
@property (readonly, nonatomic) BOOL isiCloudDrive;
@property (readonly, nonatomic) BOOL isThirdPartyFileProviderBacked;
@property (readonly, nonatomic) BOOL isCollaborativeURL;
@property (readonly, nonatomic) BOOL isInSharedFolder;
@property (readonly, nonatomic) BOOL hasSeparateSendCopyRepresentation;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) BOOL defaultCollaboration;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (readonly, nonatomic) id placeholderActivityItem;
@property (readonly, nonatomic) id activityItem;
@property (readonly, nonatomic) id sendCopyRepresentation;
@property (readonly, nonatomic) SFCollaborationMetadata *metadata;
@property (copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property (copy, nonatomic) NSArray *options;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, nonatomic) NSNumber *canAddPeople;
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) NSError *metadataLoadError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_defaultLoadingOptionsSummary;
- (void)_loadMetadataIfNeeded;
- (void)_loadSendCopyRepresentationIfNeeded;
- (id)initWithFileURL:(id)a0 itemProvider:(id)a1 activityItem:(id)a2 defaultCollaboration:(BOOL)a3 managedFileURL:(id)a4;
- (void)loadCopyRepresentationURLWithCompletionHandler:(id /* block */)a0;

@end
