@class NSData, NSString, NSURL, NSError, RUIActionSignal, NSMutableString, RUIAlertView, NSDictionary, NSXMLParser, NSMutableArray, RUIObjectModel, RUIXMLParserDelegate;
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
    RUIXMLParserDelegate *_swiftUIParserDelegate;
    int _parserState;
    BOOL isParsingSwiftUI;
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

+ (id)rowWithAttributeDict:(id)a0 delegate:(id)a1 parent:(id)a2;
+ (id)tableRowClassForElementName:(id)a0;
+ (long long)textAlignmentForString:(id)a0;
+ (id)textStyleForString:(id)a0;

- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)dealloc;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void).cxx_destruct;
- (id)initWithXML:(id)a0 baseURL:(id)a1 delegate:(id)a2;
- (id)uiObjectModel;
- (id)_createPageWithName:(id)a0 attributes:(id)a1;
- (void)_addNavigationBarWithAttributes:(id)a0;
- (void)_addSectionWithAttributes:(id)a0;
- (id)_createAndAddPageWithAttributes:(id)a0;
- (void)_finalizeElement:(id)a0;
- (void)_finalizePinView;
- (void)_finalizeSection;
- (BOOL)_isParsingSwiftUI;
- (id)_lastPageCreateIfNeeded;
- (id)_lastRow;
- (void)_logDeprecation:(id)a0 value:(id)a1;
- (id)_newRowWithAttributeDict:(id)a0;
- (void)_validateDocumentContent;
- (id)actionSignal;
- (id)initWithXML:(id)a0;
- (id)initWithXML:(id)a0 baseURL:(id)a1 style:(id)a2 delegate:(id)a3;
- (BOOL)parseActionSignalWithElementName:(id)a0;

@end
