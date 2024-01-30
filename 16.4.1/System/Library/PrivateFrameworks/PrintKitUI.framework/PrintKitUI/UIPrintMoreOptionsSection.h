@class UIPrintInColorOption, UIPrintOrientationOption, UIPrintScalingOption, UIPrintPaperSizeOption, UIPrintTwoSidedOption, UIPrintCopiesOption, UIPrintImagePDFAnnotationsOption, UIPrintPageRangeOption, UIPrintAccountInfoOption;

@interface UIPrintMoreOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintCopiesOption *copiesOption;
@property (retain, nonatomic) UIPrintPageRangeOption *pageRangeOption;
@property (retain, nonatomic) UIPrintInColorOption *blackWhiteOption;
@property (retain, nonatomic) UIPrintTwoSidedOption *twoSidedOption;
@property (retain, nonatomic) UIPrintPaperSizeOption *paperSizePrintOption;
@property (retain, nonatomic) UIPrintOrientationOption *orientationPrintOption;
@property (retain, nonatomic) UIPrintScalingOption *scalingPrintOption;
@property (retain, nonatomic) UIPrintImagePDFAnnotationsOption *imagePDFAnnotationsPrintOption;
@property (retain, nonatomic) UIPrintAccountInfoOption *accountInfoPrintOption;
@property BOOL printOptionListNeedsUpdate;

- (void)dismissKeyboard;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)keyboardShowing;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (BOOL)updatePrintOptionsList;

@end
