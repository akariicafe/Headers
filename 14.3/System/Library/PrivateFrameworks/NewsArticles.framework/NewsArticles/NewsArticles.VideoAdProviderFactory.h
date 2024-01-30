@interface NewsArticles.VideoAdProviderFactory : NSObject <SXVideoAdProviderFactory> {
    void /* unknown type, empty encoding */ adManager;
    void /* unknown type, empty encoding */ adRequestManager;
    void /* unknown type, empty encoding */ adRequestStore;
    void /* unknown type, empty encoding */ journal;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ prerollAdRequester;
}

- (id)createVideoAdProviderForComponentView:(id)a0 videoPlayerViewController:(id)a1 analyticsReporter:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
