@class NSString, NSArray;

@interface EQKitMathMLMStack : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStack> {
    NSArray *mChildren;
    int mAlign;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChildren:(id)a0;
- (void)dealloc;
- (const void *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 parser:(id)a1;
- (BOOL)isBaseFontNameUsed;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (int)schemataAlign;
- (id)schemataChildren;

@end
