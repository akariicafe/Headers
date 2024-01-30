@class NSMutableSet, TCXmlTextWriterProvider;

@interface TCXmlStreamWriter : NSObject {
    TCXmlTextWriterProvider *mTextWriterProvider;
    unsigned int mCurrentDepth;
    BOOL mContentAddedToTopElement;
    NSMutableSet *mAddedIds;
}

+ (BOOL)startElementInStream:(struct _xmlTextWriter { } *)a0 name:(id)a1 prefix:(id)a2 ns:(const char *)a3;
+ (BOOL)endElementInStream:(struct _xmlTextWriter { } *)a0;
+ (BOOL)writeStringToStream:(struct _xmlTextWriter { } *)a0 text:(id)a1;
+ (BOOL)writeAttributeToStream:(struct _xmlTextWriter { } *)a0 name:(id)a1 content:(id)a2 prefix:(id)a3 ns:(const char *)a4;
+ (BOOL)writeNamespaceToStream:(struct _xmlTextWriter { } *)a0 prefix:(id)a1 uri:(const char *)a2;
+ (BOOL)writeDtdToStream:(struct _xmlTextWriter { } *)a0 name:(id)a1 pubid:(id)a2 sysid:(id)a3 subset:(id)a4;
+ (BOOL)writeAnchorTargetToStream:(struct _xmlTextWriter { } *)a0 name:(id)a1;
+ (BOOL)startPlainElementInStream:(struct _xmlTextWriter { } *)a0 name:(id)a1;
+ (BOOL)writePlainAttributeToStream:(struct _xmlTextWriter { } *)a0 name:(id)a1 content:(id)a2;
+ (id)newXmlStreamWriterWithZipEntryName:(id)a0 outputStream:(id)a1 isCompressed:(BOOL)a2;
+ (void)resetElementIds;

- (BOOL)tearDown;
- (BOOL)writeString:(id)a0;
- (BOOL)endElement;
- (BOOL)setUp;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTextWriterProvider:(id)a0;
- (BOOL)startElement:(id)a0 prefix:(id)a1 ns:(const char *)a2;
- (BOOL)writeAttribute:(id)a0 content:(id)a1 prefix:(id)a2 ns:(const char *)a3;
- (struct _xmlTextWriter { } *)textWriter;
- (BOOL)isWriting;
- (id)textWriterProvider;
- (BOOL)endElementsToDepth:(unsigned int)a0;
- (BOOL)writeAttribute:(id)a0 intContent:(long long)a1 prefix:(id)a2 ns:(const char *)a3;
- (BOOL)writeAttribute:(id)a0 boolContent:(BOOL)a1 prefix:(id)a2 ns:(const char *)a3;
- (BOOL)writeAttribute:(id)a0 enumContent:(int)a1 map:(id)a2 prefix:(id)a3 ns:(const char *)a4;
- (BOOL)writeAttribute:(id)a0 doubleContent:(double)a1 prefix:(id)a2 ns:(const char *)a3;
- (BOOL)writePlainAttribute:(id)a0 content:(id)a1;
- (BOOL)contentAddedToTopElement;
- (BOOL)startPlainElement:(id)a0;
- (unsigned int)currentDepth;
- (BOOL)writePlainAttribute:(id)a0 intContent:(long long)a1;
- (BOOL)writePlainAttribute:(id)a0 boolContent:(BOOL)a1;
- (BOOL)writePlainAttribute:(id)a0 enumContent:(int)a1 map:(id)a2;
- (BOOL)writePlainAttribute:(id)a0 doubleContent:(double)a1;
- (BOOL)writeElementId:(id)a0;
- (BOOL)writeNamespace:(id)a0 uri:(const char *)a1;
- (BOOL)writeDtd:(id)a0 pubid:(id)a1 sysid:(id)a2 subset:(id)a3;
- (BOOL)writeAnchorTarget:(id)a0;

@end
