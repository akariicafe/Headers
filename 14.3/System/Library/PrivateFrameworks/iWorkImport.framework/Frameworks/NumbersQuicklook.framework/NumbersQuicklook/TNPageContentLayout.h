@class TNPageLayoutContainer;

@interface TNPageContentLayout : TSDLayout

@property (readonly, weak) TNPageLayoutContainer *pageLayout;
@property (readonly) unsigned long long pageNumber;

- (void).cxx_destruct;
- (void)validate;
- (unsigned long long)pageCount;
- (Class)repClassOverride;
- (id)computeLayoutGeometry;
- (id)initWithPageLayout:(id)a0;

@end
