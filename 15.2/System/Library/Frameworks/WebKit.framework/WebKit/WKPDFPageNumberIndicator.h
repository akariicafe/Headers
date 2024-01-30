@interface WKPDFPageNumberIndicator : UIView {
    struct RetainPtr<UILabel> { void *m_ptr; } _label;
    struct RetainPtr<_UIBackdropView> { void *m_ptr; } _backdropView;
    struct RetainPtr<NSTimer> { void *m_ptr; } _timer;
    BOOL _hasValidPageCountAndCurrentPage;
}

@property (nonatomic) unsigned int currentPageNumber;
@property (nonatomic) unsigned int pageCount;

- (void)hide:(id)a0;
- (void)_updateLabel;
- (void)_makeRoundedCorners;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)hide;
- (void)show;
- (void)dealloc;
- (id).cxx_construct;

@end
