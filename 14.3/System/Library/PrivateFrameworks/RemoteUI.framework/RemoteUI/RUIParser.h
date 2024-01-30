@class NSData, NSString, NSURL, NSError, RUIActionSignal, NSMutableString, RUIAlertView, NSDictionary, NSXMLParser, NSMutableArray, RUIObjectModel;
@protocol RUIParserDelegate;

@interface RUIParser : NSObject <NSXMLParserDelegate> {
    NSMutableString *_accumulator;
    NSDictionary *_currentElementAttributes;
    RUIAlertView *_currentAlert;
    NSXMLParser *_parser;
    RUIObjectModel *_uiObjectModel;
    NSMutableArray *_pages;
    NSMutableArray *_currentPageStack;
    RUIActionSignal *_actionSignal;
    int _parserState;
    NSMutableArray *_elementStack;
    BOOL _foundXMLUI;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) NSData *xmlData;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) NSError *error;
@property (weak, nonatomic) id<RUIParserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)textAlignmentForString:(id)a0;
+ (id)tableRowClassForElementName:(id)a0;
+ (id)rowWithAttributeDict:(id)a0 delegate:(id)a1 parent:(id)a2;

- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithXML:(id)a0 baseURL:(id)a1 delegate:(id)a2;
- (id)uiObjectModel;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (id)initWithXML:(id)a0 baseURL:(id)a1 style:(id)a2 delegate:(id)a3;
- (id)actionSignal;
- (id)initWithXML:(id)a0;
- (void)_validateDocumentContent;
- (id)_createPageWithName:(id)a0 attributes:(id)a1;
- (id)_createAndAddPageWithAttributes:(id)a0;
- (id)_lastPageCreateIfNeeded;
- (void)_logDeprecation:(id)a0 value:(id)a1;
- (void)_finalizeSection;
- (void)_finalizePinView;
- (void)_addSectionWithAttributes:(id)a0;
- (id)_newRowWithAttributeDict:(id)a0;
- (void)_addNavigationBarWithAttributes:(id)a0;
- (id)_lastRow;
- (void)_finalizeElement:(id)a0;

@end
