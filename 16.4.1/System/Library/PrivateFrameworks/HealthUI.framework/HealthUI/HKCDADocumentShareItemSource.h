@class HKHealthStore, NSData, HKCDAPDFGenerator, NSURL, HKCDADocumentSample;

@interface HKCDADocumentShareItemSource : UIActivityItemProvider

@property (readonly, nonatomic) HKCDADocumentSample *documentSample;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) NSData *shareData;
@property (readonly, nonatomic) HKCDAPDFGenerator *generator;
@property (readonly, nonatomic) NSURL *exportArchiveURL;

- (id)item;
- (void)dealloc;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void)_buildZipArchiveWithCDA:(id)a0 generatedPDF:(id)a1 completion:(id /* block */)a2;
- (void)_generatePDFforCDA:(id)a0 completion:(id /* block */)a1;
- (void)_loadShareDataWithHealthStore:(id)a0 completion:(id /* block */)a1;
- (id)_simpleError:(id)a0;
- (id)initWithDocumentSample:(id)a0 healthStore:(id)a1;

@end
