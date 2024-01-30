@interface ENMLWriter : ENXMLWriter

+ (BOOL)validateURLComponents:(id)a0;
+ (id)emptyNote;

- (id)init;
- (void)endDocument;
- (BOOL)startElement:(id)a0 attributes:(id)a1;
- (void)startDocumentWithAttributes:(id)a0;
- (void)startDocument;
- (id)validateURLAttribute:(id)a0 inAttributes:(id)a1;
- (void)writeResourceWithDataHash:(id)a0 mime:(id)a1 attributes:(id)a2;
- (void)writeResource:(id)a0;
- (void)writeEncryptedInfo:(id)a0;
- (void)writeTodoWithCheckedState:(BOOL)a0;

@end
