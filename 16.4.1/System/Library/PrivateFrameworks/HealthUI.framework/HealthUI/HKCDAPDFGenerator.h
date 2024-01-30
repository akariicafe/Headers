@interface HKCDAPDFGenerator : NSObject

+ (id)PDFTranslator;

- (id)init;
- (void)_finishGenerationWithURL:(id)a0 tempFileDescriptor:(int)a1 completionHandler:(id /* block */)a2 error:(id)a3;
- (void)_pdfForHTML:(id)a0 completionHandler:(id /* block */)a1;
- (void)generatePDFForCDAXML:(id)a0 completionHandler:(id /* block */)a1;

@end
