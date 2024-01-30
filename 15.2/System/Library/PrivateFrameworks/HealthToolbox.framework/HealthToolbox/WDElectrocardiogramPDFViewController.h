@class NSString, PDFView, NSData, NSDate, PDFDocument;

@interface WDElectrocardiogramPDFViewController : UIViewController <UIInterfaceOrientationMaskOverride>

@property (readonly, nonatomic) NSData *pdfData;
@property (readonly, nonatomic) NSDate *sampleDate;
@property (readonly, nonatomic) PDFDocument *pdfDocument;
@property (readonly, nonatomic) PDFView *pdfView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)didTapDone;
- (void).cxx_destruct;
- (unsigned long long)overrideMask;
- (void)didTapShare;
- (id)initWithPDFData:(id)a0 sampleDate:(id)a1;

@end
