@class QLItemPresenterViewController, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, QLPrintingProtocol;

@interface QLPreviewItemPrinter : QLPreviewPrinter {
    NSObject<OS_dispatch_queue> *_accessPrinterQueue;
    NSObject<OS_dispatch_semaphore> *_waitForPrinterSemaphore;
    BOOL _didReceivePrinter;
}

@property (retain, nonatomic) id<QLPrintingProtocol> itemPrinter;
@property (retain, nonatomic) QLItemPresenterViewController *presenter;

- (id)printer;
- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)drawPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)numberOfPages;
- (void)_didReceivePrinter:(id)a0;
- (void)_waitForPrinterSynchronously;

@end
