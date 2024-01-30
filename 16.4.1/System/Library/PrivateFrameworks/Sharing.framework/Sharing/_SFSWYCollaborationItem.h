@class NSUUID, SFCollaborationCloudSharingResult, NSArray, SFPendingCollaboration, NSItemProvider, NSString, SFCollaborationMetadata, SFCollaborationShareOptions, NSError, LPLinkMetadata, NSNumber;

@interface _SFSWYCollaborationItem : SFCollaborationItem <SFCollaborationSWYItem>

@property (readonly, nonatomic) SFPendingCollaboration *pendingCollaboration;
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
- (void)_loadOptionsIfNeeded;
- (id)initWithItemProvider:(id)a0 activityItem:(id)a1;

@end
