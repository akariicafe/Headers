@class UIColor, NSArray, PDFView, UIView;
@protocol PDFThumbnailContextMenuDelegate, PDFThumbnailCollectionViewInterface;

@interface PDFThumbnailView : UIView <NSCoding> {
    PDFView *_pdfView;
    struct CGSize { double width; double height; } _thumbnailSize;
    UIColor *_backgroundColor;
    long long _layoutMode;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    UIView<PDFThumbnailCollectionViewInterface> *_iconsView;
    long long _style;
}

@property (weak, nonatomic) id<PDFThumbnailContextMenuDelegate> thumbnailContextMenuDelegate;
@property (nonatomic) BOOL allowsPageReordering;
@property (weak, nonatomic) PDFView *PDFView;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSArray *selectedPages;
@property (nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;

- (void)encodeWithCoder:(id)a0;
- (void)_updateLayout;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setupNotifications;
- (void)_commonInitWithStyle:(long long)a0;
- (void)currentPageChanged:(id)a0;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (void)documentUnlocked:(id)a0;
- (void)pageChanged:(id)a0;

@end
