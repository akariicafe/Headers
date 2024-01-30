@interface PMTop : QLTop <OIProgressiveReaderDelegate>

+ (BOOL)supportsProgressiveMapping;

- (BOOL)isCancelled;
- (Class)stateClass;
- (void)initializeClasses;
- (Class)mapperClassForIndexing:(BOOL)a0;
- (void)readFile:(id)a0 orData:(id)a1 dataFileName:(id)a2 format:(unsigned long long)a3 archiver:(id)a4 forIndexing:(BOOL)a5;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;

@end
