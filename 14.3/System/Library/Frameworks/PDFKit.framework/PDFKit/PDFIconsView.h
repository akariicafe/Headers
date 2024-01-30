@class PDFThumbnailView, NSMutableArray, PDFPageIconLayer;

@interface PDFIconsView : UIView {
    PDFThumbnailView *_thumbnailView;
    NSMutableArray *_icons;
    PDFPageIconLayer *_activeIcon;
}

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)currentPage;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)updateIconsImages;
- (void)_updateScrubberForPageIndex:(int)a0;
- (int)_iconsLayoutIconCount;
- (struct CGSize { double x0; double x1; })_iconsLayoutSize;
- (void)_updateScrubberAtViewLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initFromThumbnailView:(id)a0;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (void)currentPageChanged:(id)a0;
- (void)pageChanged:(id)a0;

@end
