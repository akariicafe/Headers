@class NSDictionary, NSURL, NSMutableData, NSString, CoreDAVItem;

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate> {
    CoreDAVItem *_parentElement;
}

@property (nonatomic) BOOL isUnrecognized;
@property (nonatomic) BOOL checkedElementValidityIfRootElement;
@property (nonatomic) int parsingState;
@property (nonatomic) SEL parentElementSetter;
@property (retain, nonatomic) NSMutableData *characters;
@property (retain, nonatomic) NSMutableData *cDATA;
@property (retain, nonatomic) CoreDAVXMLElementGenerator *currentlyParsingSubItem;
@property (weak, nonatomic) CoreDAVXMLElementGenerator *parentGenerator;
@property (retain, nonatomic) NSDictionary *cachedElementParseRules;
@property (retain, nonatomic) CoreDAVItem *element;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tracksRootElement;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (BOOL)isExpectedNameSpace:(id)a0 andElementName:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)resumeParsingWithParser:(id)a0;
- (id)initWithParser:(id)a0 parentGenerator:(id)a1 parentElementSetter:(SEL)a2 element:(id)a3;
- (void)noteChildCascadingFailure;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;
- (id)initWithParser:(id)a0 baseURL:(id)a1 rootElementNameSpace:(id)a2 elementName:(id)a3 parseClass:(Class)a4;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void)notifyElement:(id)a0 ofAttributesFound:(id)a1;
- (void).cxx_destruct;

@end
