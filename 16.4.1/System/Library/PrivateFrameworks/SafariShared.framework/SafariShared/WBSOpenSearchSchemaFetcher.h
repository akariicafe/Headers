@class NSMutableSet;

@interface WBSOpenSearchSchemaFetcher : NSObject {
    NSMutableSet *_openSearchDescriptionURLs;
}

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)a0;
- (void)fetchOpenSearchDescriptionWithURL:(id)a0;

@end
