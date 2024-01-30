@class NSString, NSMutableString;

@interface GLKShaderBlockNode : NSObject <NSXMLParserDelegate, NSCopying>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *loopVar;
@property (retain, nonatomic) NSMutableString *blockText;
@property (nonatomic) GLKShaderBlockNode *parent;
@property (nonatomic) GLKShaderBlockNode *next;
@property (nonatomic) GLKShaderBlockNode *children;
@property (nonatomic) int type;
@property (nonatomic) struct GLKBigInt_s { unsigned long long n0; unsigned long long n1; } mask;
@property (nonatomic) int unrollCt;
@property (nonatomic) unsigned int index;
@property (nonatomic) int propertyClass;
@property (nonatomic) BOOL indexedMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setMasksWithRoot:(id)a0 treeRoot:(id)a1 mask:(struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *)a2;
+ (id)copyTreeWithRoot:(id)a0 parent:(id)a1;
+ (void)buildUnrollNodeArray:(id)a0 array:(id)a1;
+ (id)copyTreeWithRootButNotSiblings:(id)a0 parent:(id)a1;
+ (void)setIndicesForRoot:(id)a0 andReplaceLoopVar:(id)a1 baseLabel:(id)a2 basePropertyClass:(int)a3 usingIndex:(unsigned int)a4 indexString:(id)a5;
+ (void)insertNode:(id)a0 afterSibling:(id)a1;
+ (struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; })maskForLabel:(id)a0 root:(id)a1 index:(int)a2;
+ (unsigned int)nodeCt:(id)a0 nodeCt:(unsigned int *)a1;
+ (void)printTree:(id)a0;
+ (void)printTreeVerbose:(id)a0;

- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
