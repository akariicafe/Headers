@class NSString, XMLWrapperNamespace;

@interface XMLWrapperAttribute : NSObject {
    struct _xmlAttr { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlAttr *x6; struct _xmlAttr *x7; struct _xmlDoc *x8; struct _xmlNs *x9; int x10; void *x11; } *_attributeNode;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) XMLWrapperNamespace *ns;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)initWithNode:(struct _xmlAttr { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlAttr *x6; struct _xmlAttr *x7; struct _xmlDoc *x8; struct _xmlNs *x9; int x10; void *x11; } *)a0 error:(id *)a1;
- (BOOL)xmlAttrNodeForNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 error:(id *)a1;

@end
