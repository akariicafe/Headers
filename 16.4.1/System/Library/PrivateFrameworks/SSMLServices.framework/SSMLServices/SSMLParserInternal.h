@interface SSMLParserInternal : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ parser;
    void /* unknown type, empty encoding */ nodes;
    void /* unknown type, empty encoding */ checkError;
}

- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parserDidStartDocument:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
