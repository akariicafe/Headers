@class UISwitch;

@interface UIPrintBlackWhiteOption : UIPrintOption

@property (retain, nonatomic) UISwitch *bwswitch;
@property (nonatomic) BOOL canShowColor;

- (id)summary;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (BOOL)blackWhite;
- (void).cxx_destruct;
- (id)printOptionTableViewCell;
- (void)setBlackWhite:(BOOL)a0;
- (void)changeBlackWhite:(id)a0;
- (void)dealloc;
- (void)updateBlackWhite;

@end
