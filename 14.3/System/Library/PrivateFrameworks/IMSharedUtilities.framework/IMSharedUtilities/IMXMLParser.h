@class IMXMLParserFrame, NSString, IMXMLParserContext, NSMutableArray, NSXMLParser;

@interface IMXMLParser : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    IMXMLParserContext *_context;
    IMXMLParserFrame *_topFrame;
    NSMutableArray *_otherFrames;
    struct _TidyDoc { int x0; } *_tidyDoc;
    struct __CFDictionary { } *_framespace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundIgnorableWhitespace:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)_setupTidy;
- (void)_teardownTidy;
- (id)_newDataByTidyingData:(id)a0;
- (void)invokedTidyAndSucceeded:(BOOL)a0;
- (BOOL)parseContext:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;

@end
