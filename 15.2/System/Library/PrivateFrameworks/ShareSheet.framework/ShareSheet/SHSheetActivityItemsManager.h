@class NSArray, SHSheetActivityItemsResult, UIActivityViewController;

@interface SHSheetActivityItemsManager : NSObject

@property (retain, nonatomic) SHSheetActivityItemsResult *cacheResult;
@property (copy, nonatomic) NSArray *linkMetadataValues;
@property (copy, nonatomic) NSArray *urlRequests;
@property (readonly, copy, nonatomic) NSArray *activityItems;
@property (readonly, weak, nonatomic) UIActivityViewController *activityViewController;
@property (nonatomic) BOOL isContentManaged;

- (id)initWithActivityItems:(id)a0 activityViewController:(id)a1;
- (id)securityScopedURLsForActivity:(id)a0;
- (void).cxx_destruct;
- (id)activityItemValuesForActivity:(id)a0;
- (void)loadItemProvidersForRequest:(id)a0 activity:(id)a1 completion:(id /* block */)a2;
- (void)_updateIsContentManagedForURLs;
- (void)_updateCacheResultForActivity:(id)a0;
- (id)_resolvePlaceholderActivityItems;
- (id)_resolveActivityItemsForActivity:(id)a0;
- (void)_configureContentManagedForActivityItemValue:(id)a0 outURLs:(id)a1 outScopedURLs:(id)a2;
- (id)_requestThumbnailForActivityItem:(id)a0 activity:(id)a1;
- (long long)_requestAttachmentURLItemDataForActivityItem:(id)a0 activity:(id)a1;
- (id)_requestInitialSocialTextForActivityItem:(id)a0 activity:(id)a1;
- (id)_requestSubjectForActivityItem:(id)a0 activity:(id)a1;
- (id)_requestItemsForActivityItem:(id)a0 activity:(id)a1;
- (void)_updateURLRequests;
- (void)_updateLinkMetadataValues;
- (BOOL)_supportsWebpagesForActivity:(id)a0;
- (void)dealloc;
- (id)activityItemURLValuesForActivity:(id)a0;
- (id)subjectForActivity:(id)a0;
- (id)initialSocialTextForActivity:(id)a0;
- (void)enumerateBackgroundOperationsForActivity:(id)a0 enumerator:(id /* block */)a1;

@end
