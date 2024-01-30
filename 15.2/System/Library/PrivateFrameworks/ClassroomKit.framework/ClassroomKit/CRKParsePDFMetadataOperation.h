@class CRKBook, NSString;

@interface CRKParsePDFMetadataOperation : CATOperation

@property (readonly, nonatomic) CRKBook *book;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) BOOL parseImage;

- (id)fileName;
- (void)main;
- (void).cxx_destruct;
- (id)initWithPDFBook:(id)a0 filePath:(id)a1 parseImage:(BOOL)a2;
- (void)updateAuthor:(id)a0;
- (void)updateTitleWithDictionaryRef:(struct CGPDFDictionary { } *)a0;
- (id)titleFromDictionaryRef:(struct CGPDFDictionary { } *)a0;

@end
