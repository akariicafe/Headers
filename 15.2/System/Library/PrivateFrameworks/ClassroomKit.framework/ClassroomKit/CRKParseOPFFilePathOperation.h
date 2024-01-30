@class NSString, NSXMLParser;

@interface CRKParseOPFFilePathOperation : CATOperation <NSXMLParserDelegate> {
    NSXMLParser *mContainerParser;
    NSString *mBookFilePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAsynchronous;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)main;
- (void).cxx_destruct;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (id)initWithBookFilePath:(id)a0;

@end
