@class NSString, NSMutableArray, NSMutableString;

@interface IIO_CXMLParser : NSObject <NSXMLParserDelegate> {
    NSMutableArray *_dictionaryStack;
    NSMutableString *_textInProgress;
    id *_errorPointer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryForXMLData:(id)a0 error:(id *)a1;

- (id)initWithError:(id *)a0;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (id)initializeWithData:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;

@end
