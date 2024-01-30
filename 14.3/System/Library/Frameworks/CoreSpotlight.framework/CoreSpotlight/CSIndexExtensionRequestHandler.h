@class NSString;

@interface CSIndexExtensionRequestHandler : NSObject <NSExtensionRequestHandling, CSSearchableIndexDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)index:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)reindexAllSearchableItemsForIndex:(id)a0 acknowledgementHandler:(id /* block */)a1;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)searchableIndexDidThrottle:(id)a0;
- (void)searchableIndexDidFinishThrottle:(id)a0;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;

@end
