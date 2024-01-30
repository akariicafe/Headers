@class RUIXMLElement;

@interface RUIXMLParserDelegate : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ root;
    void /* unknown type, empty encoding */ $__lazy_storage_$_xmlElement;
}

@property (nonatomic, retain) RUIXMLElement *xmlElement;

- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)init;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void).cxx_destruct;

@end
