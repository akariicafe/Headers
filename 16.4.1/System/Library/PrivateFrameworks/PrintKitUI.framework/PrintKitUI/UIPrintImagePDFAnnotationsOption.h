@class UISwitch;

@interface UIPrintImagePDFAnnotationsOption : UIPrintOption

@property (retain, nonatomic) UISwitch *imagePDFAnnotationsSwitch;

- (id)summary;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)changeImagePDFAnnotations:(id)a0;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;

@end
