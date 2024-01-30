@class UIColor, NSArray, PDFView, PDFThumbnailViewPrivate;

@interface PDFThumbnailView : UIView <NSCoding> {
    PDFThumbnailViewPrivate *_private;
}

@property (weak, nonatomic) PDFView *PDFView;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSArray *selectedPages;
@property (nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;

- (void)_commonInit;
- (void)_updateLayout;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (void)currentPageChanged:(id)a0;
- (void)pageChanged:(id)a0;
- (void)documentUnlocked:(id)a0;

@end
