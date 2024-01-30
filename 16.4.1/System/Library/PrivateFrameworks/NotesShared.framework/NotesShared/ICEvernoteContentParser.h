@class NSString, NSMutableString, NSXMLParser;

@interface ICEvernoteContentParser : NSObject <NSXMLParserDelegate>

@property (nonatomic) BOOL shouldAppendCharactersToBuffer;
@property (retain, nonatomic) NSMutableString *bufferString;
@property (retain, nonatomic) NSMutableString *htmlString;
@property (retain, nonatomic) NSXMLParser *parser;
@property (nonatomic) unsigned long long parserType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void).cxx_destruct;
- (id)htmlStringFromEvernoteContentString:(id)a0;
- (void)parseContentString:(id)a0;
- (BOOL)shouldSelfCloseTagForStartElementName:(id)a0;
- (id)stringFromAttributes:(id)a0;
- (void)teardownParser;
- (id)titleFromHTMLString:(id)a0;

@end
