@class NSString, EQKitMathMLNode, EQKitEnvironmentInstance;
@protocol EQKitLayoutNode;

@interface EQKitMathMLMath : NSObject <EQKitMathMLNode, EQKitRootNode, EQKitExpression> {
    EQKitMathMLNode *mExpression;
    void *mAttributeCollection;
    EQKitEnvironmentInstance *mEnvironment;
}

@property (readonly, nonatomic) id<EQKitLayoutNode> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNumber;
- (void)dealloc;
- (id)init;
- (const void *)mathMLAttributes;
- (id)layoutStyleNode;
- (struct AttributeCollection { } *)attributeCollection;
- (id)initFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 parser:(id)a1;
- (BOOL)isAttributeDefaultInheritableFromStyle:(int)a0;
- (BOOL)isBaseFontNameUsed;
- (BOOL)isEmbellishedOperator;
- (int)isOperatorPaddingRequired;
- (BOOL)isSpaceLike;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (id)newLayout;
- (id)operatorCore;
- (long long)scriptLevelWithBase:(long long)a0;

@end
