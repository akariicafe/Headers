@class NSString, NSArray;

@interface WLMessageSMILContext : NSObject <NSXMLParserDelegate> {
    BOOL _inBody;
    BOOL _inPar;
}

@property (readonly, nonatomic) NSString *characters;
@property (readonly, nonatomic) NSArray *parts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
