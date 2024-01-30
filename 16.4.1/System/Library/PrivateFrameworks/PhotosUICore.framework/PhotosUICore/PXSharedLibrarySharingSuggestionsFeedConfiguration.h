@class PXSharedLibrarySharingSuggestionsDataSourceManager, PXSharedLibrarySharingSuggestionsFeedActionPerformer;

@interface PXSharedLibrarySharingSuggestionsFeedConfiguration : PXFeedConfiguration

@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsFeedActionPerformer *actionPerformer;

- (BOOL)allowsPopOnEmptyBehavior;
- (unsigned long long)gadgetType;
- (id)initWithDataSourceManager:(id)a0;
- (id)localizedSubtitle;
- (id)init;
- (id)createSeeAllViewController;
- (id)gadgetAccessoryButtonLocalizedTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetLocalizedTitle;
- (void)handleContentDismissed;
- (void)handleContentSeen;
- (long long)horizontalGadgetStyle;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2;
- (id)objectReferenceForDestination:(id)a0;
- (BOOL)wantsEmbeddedScrollView;
- (BOOL)wantsMultilineGadgetTitle;

@end
