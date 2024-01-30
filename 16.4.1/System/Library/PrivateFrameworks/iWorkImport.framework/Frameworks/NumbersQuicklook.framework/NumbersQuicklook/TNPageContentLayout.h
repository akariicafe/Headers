@class TNPageLayoutContainer;

@interface TNPageContentLayout : TSDLayout

@property (readonly, weak) TNPageLayoutContainer *pageLayout;
@property (readonly) unsigned long long pageNumber;

- (void)validate;
- (unsigned long long)pageCount;
- (void).cxx_destruct;
- (id)computeLayoutGeometry;
- (Class)repClassOverride;
- (id)initWithPageLayout:(id)a0;

@end
