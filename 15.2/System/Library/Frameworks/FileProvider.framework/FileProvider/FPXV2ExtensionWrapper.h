@class NSFileProviderExtension, NSString;

@interface FPXV2ExtensionWrapper : NSObject <NSFileProviderReplicatedExtension, NSFileProviderSearching, NSFileProviderIncrementalContentFetching, NSFileProviderThumbnailing, NSFileProviderCustomAction, NSFileProviderServicing, NSFileProviderUserInteractionSuppressing>

@property (retain, nonatomic) Class extensionClass;
@property (readonly, nonatomic) NSFileProviderExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(id)a0;
- (id)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 contents:(id)a2 options:(unsigned long long)a3 request:(id)a4 completionHandler:(id /* block */)a5;
- (id)fetchContentsForItemWithIdentifier:(id)a0 version:(id)a1 usingExistingContentsAtURL:(id)a2 existingVersion:(id)a3 request:(id)a4 completionHandler:(id /* block */)a5;
- (id)fetchThumbnailsForItemIdentifiers:(id)a0 requestedSize:(struct CGSize { double x0; double x1; })a1 perThumbnailCompletionHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)setInteractionSuppressed:(BOOL)a0 forIdentifier:(id)a1;
- (id)deleteItemWithIdentifier:(id)a0 baseVersion:(id)a1 options:(unsigned long long)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (id)enumeratorForContainerItemIdentifier:(id)a0 request:(id)a1 error:(id *)a2;
- (id)fetchContentsForItemWithIdentifier:(id)a0 version:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (id)supportedServiceSourcesForItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)itemForIdentifier:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (id)enumeratorForSearchQuery:(id)a0 request:(id)a1 error:(id *)a2;
- (void)importDidFinishWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void)materializedItemsDidChangeWithCompletionHandler:(id /* block */)a0;
- (id)performActionWithIdentifier:(id)a0 onItemsWithIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (id)modifyItem:(id)a0 baseVersion:(id)a1 changedFields:(unsigned long long)a2 contents:(id)a3 options:(unsigned long long)a4 request:(id)a5 completionHandler:(id /* block */)a6;
- (BOOL)isInteractionSuppressedForIdentifier:(id)a0;

@end
