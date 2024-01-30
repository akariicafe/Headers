@class PXVisualDiagnosticsConfiguration, NSURL;

@interface PXVisualDiagnosticsContext : NSObject

@property (readonly, nonatomic) PXVisualDiagnosticsConfiguration *configuration;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) struct CGContext { } *CGContext;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentPageBounds;
@property (readonly, nonatomic) BOOL isPrivateDataAllowed;

- (void)dealloc;
- (id)init;
- (void)beginPage;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)endPage;
- (void)addTitlePageWithTitle:(id)a0 subtitle:(id)a1;
- (void)addPagesForTableWithConfiguration:(id /* block */)a0 columnsConfiguration:(id /* block */)a1 rowsConfiguration:(id /* block */)a2;
- (void)beginPageWithConfiguration:(id /* block */)a0;
- (void)drawImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id /* block */)a1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id /* block */)a1;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 dataConsumer:(struct CGDataConsumer { } *)a1;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id /* block */)a1;

@end
