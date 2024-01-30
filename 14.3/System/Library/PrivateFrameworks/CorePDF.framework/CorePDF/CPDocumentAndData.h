@interface CPDocumentAndData : NSObject

@property (retain) struct CGPDFDocument { } *document;
@property (retain) struct __CFData { } *sourceData;

- (void)dealloc;

@end
