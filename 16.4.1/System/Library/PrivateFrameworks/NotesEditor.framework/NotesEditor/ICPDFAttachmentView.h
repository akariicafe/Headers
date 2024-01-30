@class ICSelectorDelayer, UIActivityIndicatorView, UIImage, NSOperation;

@interface ICPDFAttachmentView : ICAttachmentView {
    struct CGPDFDocument { } *_pdf;
    struct CGPDFPage { } *_page;
}

@property (weak, nonatomic) NSOperation *renderOperation;
@property (retain, nonatomic) UIActivityIndicatorView *progressView;
@property (retain) ICSelectorDelayer *startProgressSelectorDelayer;
@property (nonatomic) BOOL isManaullyGeneratingImage;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isRendering) BOOL rendering;
@property (readonly, nonatomic) BOOL availableImageIsAcceptable;
@property (readonly, nonatomic) struct CGPDFPage { } *page;

+ (id)renderingQueue;

- (id)accessibilityLabel;
- (void)setHighlightColor:(id)a0;
- (void)startProgress;
- (void)didMoveToWindow;
- (BOOL)accessibilityIgnoresInvertColors;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setAttachment:(id)a0;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didChangeMedia;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (id)pdfURL;
- (BOOL)cancelRenderingIfPossible;
- (void)cleanupPDFDocument;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTextAttachment:(id)a1 forManualRendering:(BOOL)a2;
- (BOOL)needToStartRender;
- (void)prepareForPrinting;
- (void)setupBorderForLayer:(id)a0;
- (void)startImageRenderIfNeeded;
- (void)stopProgress;
- (void)updateLayerContentsWithFade:(BOOL)a0;

@end
