@class NSString, NSMutableDictionary, OCPPackagePart;

@interface OAXTableStyleCache : NSObject {
    OCPPackagePart *mStylesPart;
    NSString *mDefaultStyleId;
    NSMutableDictionary *mCache;
}

- (id)init;
- (void).cxx_destruct;
- (struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)styleNodeForId:(id)a0;
- (id)defaultStyleId;
- (struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)defaultStyleNode;
- (void)setDefaultStyleId:(id)a0;
- (void)setStyleNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 forId:(id)a1;
- (void)setStylesPart:(id)a0;

@end
