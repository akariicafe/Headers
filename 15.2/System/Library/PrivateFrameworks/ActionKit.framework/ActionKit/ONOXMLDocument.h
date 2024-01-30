@class ONOXMLElement, NSString, NSNumberFormatter, NSDateFormatter, NSMutableDictionary;

@interface ONOXMLDocument : NSObject <ONOSearching, NSCopying, NSCoding>

@property (nonatomic) struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *xmlDocument;
@property (retain, nonatomic) ONOXMLElement *rootElement;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) unsigned long long stringEncoding;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSMutableDictionary *defaultNamespaces;

+ (id)XMLDocumentWithString:(id)a0 encoding:(unsigned long long)a1 error:(id *)a2;
+ (id)XMLDocumentWithData:(id)a0 error:(id *)a1;
+ (id)HTMLDocumentWithString:(id)a0 encoding:(unsigned long long)a1 error:(id *)a2;
+ (id)HTMLDocumentWithData:(id)a0 error:(id *)a1;

- (id)CSS:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithDocument:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0;
- (id)XPath:(id)a0;
- (id)elementWithNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (id)functionResultByEvaluatingXPath:(id)a0;
- (void)enumerateElementsWithXPath:(id)a0 block:(id /* block */)a1;
- (void)enumerateElementsWithXPath:(id)a0 usingBlock:(id /* block */)a1;
- (id)firstChildWithXPath:(id)a0;
- (void)enumerateElementsWithCSS:(id)a0 block:(id /* block */)a1;
- (void)enumerateElementsWithCSS:(id)a0 usingBlock:(id /* block */)a1;
- (id)firstChildWithCSS:(id)a0;
- (void)definePrefix:(id)a0 forDefaultNamespace:(id)a1;
- (id)enumeratorWithXPathObject:(struct _xmlXPathObject { int x0; struct _xmlNodeSet *x1; int x2; double x3; char *x4; void *x5; int x6; void *x7; int x8; } *)a0;

@end
