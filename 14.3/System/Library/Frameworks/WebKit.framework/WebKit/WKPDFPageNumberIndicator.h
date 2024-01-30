@interface WKPDFPageNumberIndicator : UIView {
    struct RetainPtr<UILabel> { void *m_ptr; } _label;
    struct RetainPtr<_UIBackdropView> { void *m_ptr; } _backdropView;
    struct RetainPtr<NSTimer> { void *m_ptr; } _timer;
    BOOL _hasValidPageCountAndCurrentPage;
}

@property (nonatomic) unsigned int currentPageNumber;
@property (nonatomic) unsigned int pageCount;

- (void)show;
- (void).cxx_destruct;
- (void)hide:(id)a0;
- (void)_updateLabel;
- (void)dealloc;
- (void)_makeRoundedCorners;
- (void)hide;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
