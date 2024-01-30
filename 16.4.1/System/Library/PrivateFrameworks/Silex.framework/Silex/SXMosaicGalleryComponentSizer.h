@class SXMosaicGalleryLayouter, NSString;

@interface SXMosaicGalleryComponentSizer : SXComponentSizer <SXMosaicGalleryLayouterDataSource>

@property (retain, nonatomic) SXMosaicGalleryLayouter *layouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (id)documentColumnLayoutForGalleryLayouter:(id)a0;
- (struct CGSize { double x0; double x1; })galleryLayouter:(id)a0 dimensionsForItemAtIndex:(unsigned long long)a1;
- (id)galleryLayouter:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (BOOL)galleryLayouter:(id)a0 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)a1;
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)a0;

@end
