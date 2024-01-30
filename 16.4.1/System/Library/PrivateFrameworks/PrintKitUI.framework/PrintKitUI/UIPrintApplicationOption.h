@class UIViewController;
@protocol UIPrintAppExtensionProtocol;

@interface UIPrintApplicationOption : UIPrintOption

@property (weak, nonatomic) UIViewController<UIPrintAppExtensionProtocol> *appPrintExtensionController;

- (id)summary;
- (void).cxx_destruct;
- (id)initWithPrintInfo:(id)a0 appPrintExtensionController:(id)a1 printPanelViewController:(id)a2;
- (id)printOptionTableViewCell;

@end
