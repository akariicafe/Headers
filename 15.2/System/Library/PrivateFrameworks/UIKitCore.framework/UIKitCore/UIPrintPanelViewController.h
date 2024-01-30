@class UIPrinter, UIViewController, UIPrintPanelNavigationController, UIPrintOptionsTableViewController, NSString, UIPopoverController, UIPrintPreviewViewController, NSArray, UIPrintPaper, UIPrintPanelWindow, UIPrintPreviewInfo, NSObject, UIView, NSLayoutConstraint, UITableView, _UIPrintMessageAndSpinnerView, UIPrintInfo, UINavigationController, NSURL, UIPrintInteractionController, UIActivityViewController;
@protocol OS_dispatch_queue, UIPrintAppExtensionProtocol;

@interface UIPrintPanelViewController : UIViewController <UIPopoverPresentationControllerDelegate, UIPrintPanelAppearanceDelegate> {
    NSObject<OS_dispatch_queue> *_lookupPrinterQueue;
}

@property (copy, nonatomic) id /* block */ previewUpdateCompletionHandler;
@property (retain, nonatomic) UIPrintPanelWindow *printPanelWindow;
@property (retain, nonatomic) UIPrintPanelNavigationController *printPanelNavigationController;
@property (weak, nonatomic) UIViewController *parentController;
@property (retain, nonatomic) UIView *previewSeparatorView;
@property (retain, nonatomic) UIPrintPreviewViewController *previewViewController;
@property (retain, nonatomic) UIView *previewPanelView;
@property (retain, nonatomic) _UIPrintMessageAndSpinnerView *messageAndSpinner;
@property (retain, nonatomic) NSLayoutConstraint *previewHeightConstraint;
@property (retain, nonatomic) UIPrintOptionsTableViewController *printOptionsTableViewController;
@property (retain, nonatomic) NSLayoutConstraint *printOptionsWidthConstraint;
@property (nonatomic) long long lastUsedPrinterIndex;
@property (retain) NSArray *lastUsedPrinterArray;
@property (retain, nonatomic) NSArray *vertScrollPrintPanelConstraints;
@property (retain, nonatomic) NSArray *horizScrollPrintPanelConstraints;
@property (retain, nonatomic) UIPopoverController *poverController;
@property (retain, nonatomic) UIActivityViewController *activityViewController;
@property (retain, nonatomic) NSURL *pdfURL;
@property (retain, nonatomic) UIPrintPreviewInfo *previewInfo;
@property (nonatomic) BOOL dismissed;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL showingPreview;
@property (retain, nonatomic) UIPrinter *printer;
@property (retain, nonatomic) UIPrintPaper *printPaper;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (retain, nonatomic) UINavigationController *printOptionsNavController;
@property (retain, nonatomic) UITableView *printOptionsTableView;
@property (retain, nonatomic) UIViewController<UIPrintAppExtensionProtocol> *appPrintExtensionController;
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)dismissAnimated:(BOOL)a0;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)keyCommands;
- (void)startPrinting;
- (void)updatePDFAnnotations;
- (void)updatePrintPreviewInfo;
- (void)updatePageRange;
- (void)printNavigationConrollerDidDismiss;
- (void)setPdfFileURL:(id)a0 shouldRenderOnChosenPaper:(BOOL)a1 completed:(BOOL)a2 pdfPassword:(id)a3;
- (void)lookupLastUsedPrinter;
- (void)showPreviewGenerating;
- (void)printPanelDidDisappear;
- (BOOL)showingVerticalPreview;
- (void)setShowPreviewGenerating:(BOOL)a0;
- (BOOL)canShowAnnotations;
- (void)readPrintOptions;
- (void)cancelButtonPressed:(id)a0;
- (void)printButtonPressed:(id)a0;
- (void)printButtonLongPress:(id)a0;
- (void)dismissPrintPanelWithAction:(long long)a0 animated:(BOOL)a1;
- (void)backButtonPressed:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })previewVisibleRange;
- (void)_generatePDFForQuickLookCompletion:(id /* block */)a0;
- (void)_presentInParentAnimated:(BOOL)a0;
- (void)presentPrintPanelAnimated:(BOOL)a0 hostingScene:(id)a1;
- (id)printerDisplayName:(id)a0;
- (id)initWithPrintInterationController:(id)a0 inParentController:(id)a1;
- (void)presentPrintPanelFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2;
- (void)presentPrintPanelFromBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)addPrintLongPressGestureToNavItem:(id)a0;
- (void).cxx_destruct;
- (void)addPrintButtonToNavItem:(id)a0;
- (void)addCanelButtonToNavItem:(id)a0;
- (BOOL)showPageRange;
- (void)updatePreveiw;
- (void)dealloc;
- (void)cancelPrinting;

@end
