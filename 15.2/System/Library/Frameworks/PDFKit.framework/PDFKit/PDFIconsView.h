@class PDFThumbnailView, NSMutableArray, PDFPageIconLayer;

@interface PDFIconsView : UIView <PDFThumbnailCollectionViewInterface> {
    PDFThumbnailView *_thumbnailView;
    NSMutableArray *_icons;
    PDFPageIconLayer *_activeIcon;
}

- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)currentPage;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)pageChanged:(id)a0;
- (id)initFromThumbnailView:(id)a0;
- (void)updateIconsImages;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (void)currentPageChanged:(id)a0;
- (void)_updateScrubberForPageIndex:(int)a0;
- (int)_iconsLayoutIconCount;
- (struct CGSize { double x0; double x1; })_iconsLayoutSize;
- (void)_updateScrubberAtViewLocation:(struct CGPoint { double x0; double x1; })a0;

@end
