@class NSString, NSMutableDictionary, NSMutableString, NSMutableArray, NSXMLParser;

@interface _EARPlsParser : NSObject <NSXMLParserDelegate> {
    NSXMLParser *parser;
    NSMutableDictionary *lexeme;
    NSMutableString *elementValue;
}

@property (copy, nonatomic) NSMutableArray *lexemes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (id)initWithData:(id)a0;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;

@end
