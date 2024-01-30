@interface VideosUI.UPNPDeviceDescriptionParser : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ scratchpad;
    void /* unknown type, empty encoding */ currentElementName;
    void /* unknown type, empty encoding */ xmlPath;
}

- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
