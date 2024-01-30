@class NSString, UIImageView, PXCMMImageViewModel, UIView, PXImageRequesterHelper;

@interface PXCMMImageView : UIView <PXChangeObserver> {
    UIImageView *_imageView;
    UIView *_highlightView;
    PXImageRequesterHelper *_imageRequesterHelper;
}

@property (retain, nonatomic) PXCMMImageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContentsRect;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateImage;
- (void)_updateImageRequestHelper;
- (void)_updateHighlighted;
- (BOOL)test_highlighted;

@end
