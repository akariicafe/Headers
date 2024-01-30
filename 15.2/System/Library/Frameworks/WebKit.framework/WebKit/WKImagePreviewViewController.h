@interface WKImagePreviewViewController : UIViewController {
    struct RetainPtr<NSArray> { void *m_ptr; } _imageActions;
    struct RetainPtr<_WKActivatedElementInfo> { void *m_ptr; } _activatedElementInfo;
    struct RetainPtr<CGImage *> { void *m_ptr; } _image;
    struct RetainPtr<UIImageView> { void *m_ptr; } _imageView;
}

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)previewActionItems;
- (void).cxx_destruct;
- (id)initWithCGImage:(struct RetainPtr<CGImage *> { void *x0; })a0 defaultActions:(struct RetainPtr<NSArray> { void *x0; })a1 elementInfo:(struct RetainPtr<_WKActivatedElementInfo> { void *x0; })a2;
- (id).cxx_construct;

@end
