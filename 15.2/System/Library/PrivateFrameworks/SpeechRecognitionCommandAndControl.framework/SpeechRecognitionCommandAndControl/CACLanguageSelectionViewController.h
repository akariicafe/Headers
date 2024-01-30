@class NSArray, NSString, CACUILanguageViewBridgeController, UIViewController;

@interface CACLanguageSelectionViewController : UIViewController <CACLanguageViewBridgeDelegate>

@property (nonatomic) unsigned long long controllerStyle;
@property (retain, nonatomic) CACUILanguageViewBridgeController *languageViewBridgeController;
@property (retain, nonatomic) UIViewController *languageViewController;
@property (retain, nonatomic) NSArray *availableLocales;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultControllerWithStyle:(unsigned long long)a0;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)updateDownloadProgress;
- (void)handleDownloadProgressChange;
- (void)handleErrorOccured:(id)a0;
- (void)selectedLanguageWithIdentifier:(id)a0;
- (void)languageDidChange;
- (void)cacLanguageDownloadStartDownload:(id)a0;
- (void)cacLanguageDownloadStopDownload:(id)a0;

@end
