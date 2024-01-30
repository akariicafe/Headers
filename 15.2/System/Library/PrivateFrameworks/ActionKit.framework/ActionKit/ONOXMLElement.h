@class NSString, NSArray, NSDictionary, NSDate, NSNumber, ONOXMLDocument;

@interface ONOXMLElement : NSObject <ONOSearching, NSCopying, NSCoding>

@property (copy, nonatomic) NSString *rawXMLString;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) unsigned long long lineNumber;
@property (copy, nonatomic) NSString *namespace;
@property (retain, nonatomic) ONOXMLElement *parent;
@property (retain, nonatomic) NSArray *children;
@property (retain, nonatomic) ONOXMLElement *previousSibling;
@property (retain, nonatomic) ONOXMLElement *nextSibling;
@property (retain, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSNumber *numberValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (nonatomic) struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *xmlNode;
@property (weak, nonatomic) ONOXMLDocument *document;
@property (readonly, nonatomic, getter=isBlank) BOOL blank;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)children;
- (id)CSS:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)childrenWithTag:(id)a0;
- (id)description;
- (id)valueForAttribute:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)XPath:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)functionResultByEvaluatingXPath:(id)a0;
- (void)enumerateElementsWithXPath:(id)a0 block:(id /* block */)a1;
- (void)enumerateElementsWithXPath:(id)a0 usingBlock:(id /* block */)a1;
- (id)firstChildWithXPath:(id)a0;
- (void)enumerateElementsWithCSS:(id)a0 block:(id /* block */)a1;
- (void)enumerateElementsWithCSS:(id)a0 usingBlock:(id /* block */)a1;
- (id)firstChildWithCSS:(id)a0;
- (id)valueForAttribute:(id)a0 inNamespace:(id)a1;
- (id)firstChildWithTag:(id)a0;
- (id)firstChildWithTag:(id)a0 inNamespace:(id)a1;
- (id)childrenWithTag:(id)a0 inNamespace:(id)a1;
- (id)childrenAtIndexes:(id)a0;
- (id)indexesOfChildrenPassingTest:(id /* block */)a0;
- (struct _xmlXPathObject { int x0; struct _xmlNodeSet *x1; int x2; double x3; char *x4; void *x5; int x6; void *x7; int x8; } *)xmlXPathObjectPtrWithXPath:(id)a0;

@end
