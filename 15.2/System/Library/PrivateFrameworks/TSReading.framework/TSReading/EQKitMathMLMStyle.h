@interface EQKitMathMLMStyle : EQKitMathMLUnaryNode

- (const void *)mathMLAttributes;
- (int)isOperatorPaddingRequired;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (id)layoutStyleNode;
- (BOOL)isEmbellishedOperator;
- (id)operatorCore;

@end
