@class NSURL, NSString;

@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource>

@property (readonly, nonatomic) NSURL *pdfTemporaryFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithPDFData:(id)a0 sampleDate:(id)a1;

@end
