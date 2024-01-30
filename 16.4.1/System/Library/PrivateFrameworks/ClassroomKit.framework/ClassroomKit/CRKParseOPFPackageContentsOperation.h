@class NSString, NSMutableString, CRKOPFPackageContents, NSXMLParser;

@interface CRKParseOPFPackageContentsOperation : CATOperation <NSXMLParserDelegate> {
    NSXMLParser *mOPFParser;
    NSString *mOPFFilePath;
    CRKOPFPackageContents *mPackageContents;
    NSMutableString *mCurrentText;
    NSString *mCoverItemID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)main;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)initWithOPFFilePath:(id)a0 identifierType:(id)a1 identifier:(id)a2;

@end
