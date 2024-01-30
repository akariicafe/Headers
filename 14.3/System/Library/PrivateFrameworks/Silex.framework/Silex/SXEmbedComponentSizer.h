@protocol SXEmbedDataProvider;

@interface SXEmbedComponentSizer : SXComponentSizer

@property (readonly, nonatomic) id<SXEmbedDataProvider> embedDataProvider;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inColumnLayout:(id)a1;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentStyle:(id)a2 DOMObjectProvider:(id)a3 layoutOptions:(id)a4 embedDataProvider:(id)a5;

@end
