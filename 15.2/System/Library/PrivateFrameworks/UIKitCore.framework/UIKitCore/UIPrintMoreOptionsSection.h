@class UIPrintOrientationOption, UIPrintPaperSizeOption, UIPrintTwoSidedOption, UIPrintCopiesOption, UIPrintImagePDFAnnotationsOption, UIPrintPageRangeOption, UIPrintBlackWhiteOption, UIPrintAccountInfoOption;

@interface UIPrintMoreOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintCopiesOption *copiesOption;
@property (retain, nonatomic) UIPrintPageRangeOption *pageRangeOption;
@property (retain, nonatomic) UIPrintBlackWhiteOption *blackWhiteOption;
@property (retain, nonatomic) UIPrintTwoSidedOption *twoSidedOption;
@property (retain, nonatomic) UIPrintPaperSizeOption *paperSizePrintOption;
@property (retain, nonatomic) UIPrintOrientationOption *orientationPrintOption;
@property (retain, nonatomic) UIPrintImagePDFAnnotationsOption *imagePDFAnnotationsPrintOption;
@property (retain, nonatomic) UIPrintAccountInfoOption *accountInfoPrintOption;

- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void).cxx_destruct;
- (void)updatePrinterInfo;
- (void)updatePrintOptionsList;
- (void)setCurrentPrinter:(id)a0;
- (void)dealloc;

@end
