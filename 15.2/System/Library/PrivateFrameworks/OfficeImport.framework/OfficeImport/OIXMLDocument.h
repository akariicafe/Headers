@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode

@property (retain) OIXMLElement *rootElement;
@property (copy) NSString *version;
@property (copy) NSString *characterEncoding;

- (id)contentString;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)openingTagString;
- (id)XMLString;
- (id)closingTagString;
- (id)initWithRootElement:(id)a0;
- (id)createMutableXMLString;

@end
