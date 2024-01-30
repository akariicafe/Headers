@class NSDictionary, _TtC19CommandAndControlUI21CACLanguageViewBridge, UIViewController;
@protocol CACLanguageViewBridgeDelegate;

@interface CACUILanguageViewBridgeController : NSObject <CommandAndControlUI.CACLanguageViewDelegate>

@property (readonly, nonatomic) NSDictionary *installationStatus;
@property (retain, nonatomic) _TtC19CommandAndControlUI21CACLanguageViewBridge *viewBridge;
@property (retain, nonatomic) UIViewController *trueViewController;
@property (weak, nonatomic) id<CACLanguageViewBridgeDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)selectedLanguageWithIdentifier:(id)a0;
- (id)createLanguageViewControllerWithLocales:(id)a0;
- (void)setSelectedLanguageIdentifier:(id)a0;
- (void)updateDownloadStatus:(id)a0;
- (void)updateInstallationStatus:(id)a0;
- (void)downloadLanguageWithIdentifier:(id)a0;
- (void)cancelDownloadWithIdentifier:(id)a0;
- (id)createLanguageViewController;

@end
