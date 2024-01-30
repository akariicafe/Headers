@class NSString;

@interface SUMarkupCellContext : SUItemCellContext {
    long long _pendingWebViewLoads;
    struct __CFDictionary { } *_webViewCache;
}

@property (retain, nonatomic) NSString *stylesheet;
@property (nonatomic) double webViewWidth;

- (void)dealloc;
- (void)webViewDidFinishLoading:(id)a0;
- (id)webViewForMarkup:(id)a0;

@end
