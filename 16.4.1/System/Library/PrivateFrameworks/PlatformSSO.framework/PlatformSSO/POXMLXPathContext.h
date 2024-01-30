@class POXMLContext;

@interface POXMLXPathContext : NSObject

@property (nonatomic) struct _xmlXPathContext { struct _xmlDoc *x0; struct _xmlNode *x1; int x2; int x3; struct _xmlHashTable *x4; int x5; int x6; struct _xmlXPathType *x7; int x8; int x9; struct _xmlHashTable *x10; int x11; int x12; struct _xmlXPathAxis *x13; struct _xmlNs **x14; int x15; void *x16; int x17; int x18; int x19; struct _xmlNode *x20; struct _xmlNode *x21; struct _xmlHashTable *x22; void /* function */ *x23; void *x24; void *x25; char *x26; char *x27; void /* function */ *x28; void *x29; struct _xmlNs **x30; int x31; void *x32; void /* function */ *x33; struct _xmlError { int x0; int x1; char *x2; int x3; char *x4; int x5; char *x6; char *x7; char *x8; int x9; int x10; void *x11; void *x12; } x34; struct _xmlNode *x35; struct _xmlDict *x36; int x37; void *x38; unsigned long long x39; unsigned long long x40; int x41; } *xpathCtx;
@property (retain, nonatomic) POXMLContext *xmldocContext;

- (void)dealloc;
- (void).cxx_destruct;
- (id)evaluateXPath:(id)a0;
- (id)initWithXMLContext:(id)a0;
- (BOOL)registerNamespaces:(id)a0;

@end
