@class NSString, NSMutableString, IMXMLReparserContext, NSError, NSXMLParser;

@interface IMXMLReparser : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    NSMutableString *_output;
    IMXMLReparserContext *_context;
    NSError *_error;
    unsigned long long _depth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)parseWithContext:(id)a0;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;

@end
