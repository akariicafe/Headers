@class NSString, NSMutableDictionary, NSMutableSet, NSMutableString, NSXMLParser;

@interface _EARPlsParser : NSObject <NSXMLParserDelegate> {
    NSString *_currentGrapheme;
    NSMutableSet *_currentPhonemes;
    NSXMLParser *_parser;
    NSMutableString *_elementValue;
}

@property (readonly, nonatomic) NSMutableDictionary *lexemes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (id)initWithFilePath:(id)a0;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void).cxx_destruct;

@end
