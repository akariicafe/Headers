@class NSString;
@protocol EQKitLayoutNode;

@interface EQKitMathMLNode : NSObject <EQKitLayoutNode>

@property (nonatomic) id<EQKitLayoutNode> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNumber;
- (BOOL)isBaseFontNameUsed;
- (int)isOperatorPaddingRequired;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (BOOL)isSpaceLike;
- (id)layoutStyleNode;
- (BOOL)isEmbellishedOperator;
- (id)operatorCore;
- (BOOL)isAttributeDefaultInheritableFromStyle:(int)a0;
- (long long)scriptLevelWithBase:(long long)a0;

@end
