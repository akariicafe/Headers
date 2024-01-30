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
}

@property (readonly) NSString *title;
@property BOOL creatingPDF;
@property double lastPageUpdate;
@property double progressAlertDelay;
@property (weak) UIWindowScene *hostingWindowScene;
@property (retain) UIWindow *progressAlertWindow;

- (void)endProgress;
- (id)initWithPrinterName:(id)a0 forceDisplayAsAlert:(BOOL)a1 hostingWindowScene:(id)a2 cancelHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)progressCancel;
- (void)hideProgressAnimated:(BOOL)a0;
- (void)_mainQueue_presentProgressAlert;
- (void)_mainQueue_showProgress:(id)a0 immediately:(BOOL)a1;
- (BOOL)progressVisible;
- (void)setPage:(long long)a0 ofPage:(long long)a1;
- (void)_presentProgressAlert;
- (void)_mainQueue_hideProgressAnimated:(BOOL)a0;
- (void)_mainQueue_endProgress;
- (void)showProgress:(id)a0 immediately:(BOOL)a1;
- (void)setPrintInfoState:(int)a0;
- (id)initPDFCreationWithHostingWindowScene:(id)a0 cancelHandler:(id /* block */)a1;
- (double)nextPrintDelay;

@end
