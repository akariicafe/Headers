@interface WBSSystemNoteTakingLinkMetadataFetcher : NSObject

+ (id)sharedFetcher;

- (void)fetchMetadataForWebView:(id)a0 completion:(id /* block */)a1;
- (id)linkContextPreviewForMetadata:(id)a0 image:(id)a1 selectedText:(id)a2;

@end
