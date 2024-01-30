@interface ENMLWriter : ENXMLWriter

+ (id)emptyNote;
+ (BOOL)validateURLComponents:(id)a0;

- (id)init;
- (void)endDocument;
- (void)startDocument;
- (void)startDocumentWithAttributes:(id)a0;
- (BOOL)startElement:(id)a0 attributes:(id)a1;
- (id)validateURLAttribute:(id)a0 inAttributes:(id)a1;
- (void)writeEncryptedInfo:(id)a0;
- (void)writeResource:(id)a0;
- (void)writeResourceWithDataHash:(id)a0 mime:(id)a1 attributes:(id)a2;
- (void)writeTodoWithCheckedState:(BOOL)a0;

@end
