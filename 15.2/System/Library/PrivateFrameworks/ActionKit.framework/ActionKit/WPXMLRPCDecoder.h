@class NSString, NSMutableString, NSData, WPXMLRPCDecoderDelegate, NSXMLParser;

@interface WPXMLRPCDecoder : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    WPXMLRPCDecoderDelegate *_delegate;
    BOOL _isFault;
    NSData *_body;
    NSData *_originalData;
    id _object;
    NSMutableString *_methodName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFault;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)initWithData:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)abortParsing;
- (id)error;
- (void)parse;
- (id)object;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (long long)faultCode;
- (id)faultString;

@end
