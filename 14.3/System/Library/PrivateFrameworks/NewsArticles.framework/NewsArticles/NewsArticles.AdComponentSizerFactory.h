@class NSString;

@interface NewsArticles.AdComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ layoutStore;
    void /* unknown type, empty encoding */ bannerAdLayoutAttributesFactory;
    void /* unknown type, empty encoding */ bannerAdFactory;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ role;

- (id)init;
- (void).cxx_destruct;
- (id)sizerForComponent:(id)a0 componentLayout:(id)a1 layoutOptions:(id)a2 DOMObjectProvider:(id)a3;

@end
