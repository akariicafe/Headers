@class UIPrintScaleToFitOption, UIPrintScaleDownOnlyOption;

@interface UIPrintScalingSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintScaleToFitOption *scaleToFitPrintOption;
@property (retain, nonatomic) UIPrintScaleDownOnlyOption *scaleDownOnlyPrintOption;

- (void)scaleToFitChanged;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void).cxx_destruct;
- (void)updatePrintOptionsList;
- (void)dealloc;

@end
