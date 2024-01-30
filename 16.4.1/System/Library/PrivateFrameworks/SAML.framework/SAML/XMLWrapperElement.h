@class NSString, NSDictionary, XMLWrapperQuery, NSMutableDictionary, NSArray, NSMutableArray;

@interface XMLWrapperElement : NSObject {
    struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *_xmlNode;
    BOOL _ownsXMLNode;
    NSMutableDictionary *_attributes;
    NSMutableArray *_elements;
}

@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) XMLWrapperQuery *query;
@property (retain, nonatomic) NSString *textContent;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSMutableDictionary *namespaces;
@property (readonly, nonatomic) NSArray *elements;
@property (retain, nonatomic) NSArray *childElementSequence;

- (void)setElements:(id)a0;
- (void)setNamespace:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getElementsByTagName:(id)a0;
- (id)xmlString:(id *)a0;
- (void)setAttributeWithName:(id)a0 value:(id)a1;
- (id)attributeWithName:(id)a0;
- (void)replaceChildElement:(id)a0 newElement:(id)a1;
- (void)addChildElement:(id)a0;
- (void)addChildElement:(id)a0 before:(id)a1;
- (id)firstElementByTagName:(id)a0;
- (id)firstResultByXpathQuery:(id)a0;
- (id)getResultsByXpathQuery:(id)a0;
- (id)initWithNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 doc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a1 query:(id)a2 error:(id *)a3;
- (id)initWithTagName:(id)a0 error:(id *)a1;
- (void)removeChildElement:(id)a0;
- (void)reorderChildElements;
- (struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)xmlNode:(id *)a0;

@end
