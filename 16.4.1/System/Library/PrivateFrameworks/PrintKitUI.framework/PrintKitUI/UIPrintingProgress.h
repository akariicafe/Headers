@class UIWindow, NSString, UIWindowScene, UIAlertController, UIPrintingProgressViewController;

@interface UIPrintingProgress : NSObject {
    NSString *_printerName;
    id /* block */ _cancelHandler;
    double _startTime;
    double _displayTime;
    UIAlertController *_alertController;
    UIPrintingProgressViewController *_viewController;
    BOOL _donePrinting;
    BOOL _forceDisplayAsAlert;
    BOOL _presentingAlert;
}

@property (readonly) NSString *title;
@property BOOL creatingPDF;
@property double lastPageUpdate;
@property double progressAlertDelay;
@property (weak) UIWindowScene *hostingWindowScene;
@property (retain) UIWindow *progressAlertWindow;

- (void)endProgress;
- (void)setPrintInfoState:(int)a0;
- (void).cxx_destruct;
- (void)hideProgressAnimated:(BOOL)a0;
- (BOOL)progressVisible;
- (void)_mainQueue_presentProgressAlert;
- (void)setPage:(long long)a0 ofPage:(long long)a1;
- (void)_mainQueue_endProgress;
- (void)_mainQueue_hideProgressAnimated:(BOOL)a0;
- (void)_mainQueue_showProgress:(id)a0 immediately:(BOOL)a1;
- (void)_presentProgressAlert;
- (id)initPDFCreationWithHostingWindowScene:(id)a0 cancelHandler:(id /* block */)a1;
- (id)initWithPrinterName:(id)a0 forceDisplayAsAlert:(BOOL)a1 hostingWindowScene:(id)a2 cancelHandler:(id /* block */)a3;
- (double)nextPrintDelay;
- (void)progressCancel;
- (void)showProgress:(id)a0 immediately:(BOOL)a1;

@end
