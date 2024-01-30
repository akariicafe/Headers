@class NSArray, NSDictionary, NSMutableArray, _SFInjectedJavaScriptController;

@interface _SFWebClipMetadataFetcher : NSObject {
    NSDictionary *_metaTags;
    NSArray *_linkTags;
    NSMutableArray *_metadataConsumers;
    BOOL _fetchingCompleted;
    _SFInjectedJavaScriptController *_jsController;
}

+ (id)metadataFetcherScriptSource;

- (void).cxx_destruct;
- (id)initWithInjectedJavascriptController:(id)a0;
- (void)fetchMetadataWithConsumer:(id /* block */)a0;
- (void)_startFetchingMetadata;
- (id)_webClipLinkTagWithDictionary:(id)a0;

@end
