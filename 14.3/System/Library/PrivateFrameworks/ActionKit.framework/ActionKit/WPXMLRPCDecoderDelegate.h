@class NSString, NSMutableArray;

@interface WPXMLRPCDecoderDelegate : NSObject <NSXMLParserDelegate> {
    WPXMLRPCDecoderDelegate *myParent;
    NSMutableArray *myChildren;
    int myElementType;
    NSString *myElementKey;
    id myElementValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (int)elementType;
- (id)parent;
- (id)elementValue;
- (void)setElementType:(int)a0;
- (id)initWithParent:(id)a0;
- (id)parseData:(id)a0;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)setElementValue:(id)a0;
- (id)parseString:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)setParent:(id)a0;
- (void)setElementKey:(id)a0;
- (id)elementKey;
- (BOOL)isDictionaryElementType:(int)a0;
- (id)parseInteger:(id)a0;
- (id)parseDouble:(id)a0;
- (id)parseBoolean:(id)a0;
- (id)parseDate:(id)a0;
- (void)addElementValueToParent;
- (id)parseDateString:(id)a0 withFormat:(id)a1;

@end
