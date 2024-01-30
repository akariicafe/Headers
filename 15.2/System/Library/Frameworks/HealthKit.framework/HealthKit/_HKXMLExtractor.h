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

- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parseWithData:(id)a0;
- (void)addTagSpecificationForExtraction:(id)a0;
- (id)getDataForTagSpecification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_parseWithXMLParser:(id)a0;
- (void)_resetScanningState;
- (void)parseWithStream:(id)a0;
- (id)_matchSpecificationWithAttributes:(id)a0;

@end
