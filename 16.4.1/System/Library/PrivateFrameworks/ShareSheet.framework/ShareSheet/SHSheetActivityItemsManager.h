@class NSArray, SHSheetActivityItemsResult, UIActivityViewController;
@protocol SHSheetActivityItemsManagerCollaborationDelegate, SHSheetActivityItemsManagerDelegate;

@interface SHSheetActivityItemsManager : NSObject

@property (retain, nonatomic) SHSheetActivityItemsResult *cacheResult;
@property (copy, nonatomic) NSArray *linkMetadataValues;
@property (copy, nonatomic) NSArray *urlRequests;
@property (readonly, copy, nonatomic) NSArray *activityItems;
@property (readonly, weak, nonatomic) UIActivityViewController *activityViewController;
@property (weak, nonatomic) id<SHSheetActivityItemsManagerDelegate> delegate;
@property (weak, nonatomic) id<SHSheetActivityItemsManagerCollaborationDelegate> collaborationDelegate;
@property (nonatomic) BOOL isContentManaged;

+ (id)placeholderActivityItemValuesForActivityItem:(id)a0 activityViewController:(id)a1;

- (void)invalidateCache;
- (void).cxx_destruct;
- (void)_configureContentManagedForActivityItemValue:(id)a0 outURLs:(id)a1 outScopedURLs:(id)a2;
- (id)_delegateLoadedURLs;
- (void)_didLoadGroupActivityMetadata:(id)a0;
- (void)_loadGroupActivityMetadataIfNeeded;
- (long long)_requestAttachmentURLItemDataForActivityItem:(id)a0 activity:(id)a1;
- (id)_requestInitialSocialTextForActivityItem:(id)a0 activity:(id)a1;
- (id)_requestItemsForActivityItem:(id)a0 activity:(id)a1;
- (id)_requestSubjectForActivityItem:(id)a0 activity:(id)a1;
- (id)_requestThumbnailForActivityItem:(id)a0 activity:(id)a1;
- (id)_resolveActivityItemsForActivity:(id)a0;
- (id)_resolvePlaceholderActivityItems;
- (BOOL)_supportsWebpagesForActivity:(id)a0;
- (void)_updateCacheResultForActivity:(id)a0;
- (void)_updateIsContentManagedForURLs;
- (void)_updateLinkMetadataValues;
- (void)_updateURLRequests;
- (id)activityItemURLValuesForActivity:(id)a0;
- (id)activityItemValuesForActivity:(id)a0;
- (void)enumerateBackgroundOperationsForActivity:(id)a0 enumerator:(id /* block */)a1;
- (id)initWithActivityItems:(id)a0 activityViewController:(id)a1 delegate:(id)a2 collaborationDelegate:(id)a3;
- (id)initialSocialTextForActivity:(id)a0;
- (void)loadItemProvidersForRequest:(id)a0 activity:(id)a1 completion:(id /* block */)a2;
- (id)placeholderActivityItemValuesForActivityItem:(id)a0 activityViewController:(id)a1;
- (id)securityScopedURLsForActivity:(id)a0;
- (id)subjectForActivity:(id)a0;
- (id)suggestedImageDataFromActivityItem:(id)a0;

@end
