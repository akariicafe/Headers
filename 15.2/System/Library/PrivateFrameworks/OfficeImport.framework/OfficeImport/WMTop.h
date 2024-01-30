@interface WMTop : QLTop

- (Class)stateClass;
- (void)initializeClasses;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)mapperClassForIndexing:(BOOL)a0;

@end
