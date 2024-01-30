@class NSString, NSMutableArray, NSMutableDictionary;

@interface _HKXMLExtractor : NSObject <NSXMLParserDelegate> {
    NSMutableArray *_allTagSpecifications;
    NSMutableArray *_stackOfElements;
    NSString *_matchedTagSpecification;
    NSMutableDictionary *_resultTagContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parseWithData:(id)a0;
- (void)addTagSpecificationForExtraction:(id)a0;
- (id)getDataForTagSpecification:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)_parseWithXMLParser:(id)a0;
- (void)_resetScanningState;
- (id)_matchSpecificationWithAttributes:(id)a0;
- (void)parseWithStream:(id)a0;

@end
