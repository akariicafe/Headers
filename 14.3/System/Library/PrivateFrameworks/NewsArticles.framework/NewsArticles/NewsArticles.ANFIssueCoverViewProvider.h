@interface NewsArticles.ANFIssueCoverViewProvider : NSObject <SXIssueCoverViewProvider> {
    void /* unknown type, empty encoding */ issue;
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ layoutAttributesFactory;
    void /* unknown type, empty encoding */ renderer;
}

- (id)init;
- (void).cxx_destruct;
- (id)viewForIssueCover:(id)a0;
- (void)presentIssueCover:(id)a0 onView:(id)a1 options:(id)a2;

@end
