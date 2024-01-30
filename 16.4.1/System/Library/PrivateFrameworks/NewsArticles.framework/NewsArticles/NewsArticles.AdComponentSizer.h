@interface NewsArticles.AdComponentSizer : SXComponentSizer {
    void /* unknown type, empty encoding */ layoutStore;
    void /* unknown type, empty encoding */ bannerAdLayoutAttributesFactory;
    void /* unknown type, empty encoding */ bannerAdFactory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isVisualDebuggingEnabled;
}

- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inColumnLayout:(id)a1;
- (BOOL)requiresSizeChangeForStateChange:(id)a0 fromState:(id)a1;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)a0;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentStyle:(id)a2 DOMObjectProvider:(id)a3 layoutOptions:(id)a4;

@end
