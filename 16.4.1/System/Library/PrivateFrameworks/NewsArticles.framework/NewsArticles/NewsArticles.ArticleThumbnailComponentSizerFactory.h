@class NSString;

@interface NewsArticles.ArticleThumbnailComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ linkedContentProvider;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ role;

- (id)sizerForComponent:(id)a0 componentLayout:(id)a1 layoutOptions:(id)a2 DOMObjectProvider:(id)a3;
- (id)init;
- (void).cxx_destruct;

@end
