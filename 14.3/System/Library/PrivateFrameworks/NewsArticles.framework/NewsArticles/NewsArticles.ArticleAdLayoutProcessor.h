@interface NewsArticles.ArticleAdLayoutProcessor : NSObject <SXLayoutProcessor> {
    void /* unknown type, empty encoding */ bannerRequestManager;
    void /* unknown type, empty encoding */ bannerAdFactory;
    void /* unknown type, empty encoding */ prerollRequestManager;
    void /* unknown type, empty encoding */ prerollRequestStore;
    void /* unknown type, empty encoding */ prerollJournal;
    void /* unknown type, empty encoding */ documentControllerProvider;
    void /* unknown type, empty encoding */ layoutEnvironmentProvider;
    void /* unknown type, empty encoding */ layoutEnvironment;
}

- (void)processLayoutTask:(id)a0 layoutBlueprint:(id)a1 DOMObjectProvider:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
