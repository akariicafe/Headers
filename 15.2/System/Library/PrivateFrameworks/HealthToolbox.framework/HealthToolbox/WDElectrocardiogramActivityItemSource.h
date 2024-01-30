@class NSURL, NSString;

@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource>

@property (nonatomic) unsigned long long provenance;
@property (readonly, nonatomic) NSURL *pdfTemporaryFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPDFData:(id)a0 sampleDate:(id)a1 provenance:(unsigned long long)a2;

@end
