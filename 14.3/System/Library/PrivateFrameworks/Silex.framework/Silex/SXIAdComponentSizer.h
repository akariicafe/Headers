@class SXAdController;

@interface SXIAdComponentSizer : SXComponentSizer

@property (readonly, nonatomic) SXAdController *adController;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inColumnLayout:(id)a1;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)a0;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)a0;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentStyle:(id)a2 DOMObjectProvider:(id)a3 layoutOptions:(id)a4 adController:(id)a5;

@end
