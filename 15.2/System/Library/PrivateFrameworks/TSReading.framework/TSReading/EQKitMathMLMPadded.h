@class NSString;

@interface EQKitMathMLMPadded : EQKitMathMLUnaryNode <EQKitLayoutSchemataPadded>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (const void *)mathMLAttributes;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (BOOL)isEmbellishedOperator;
- (id)operatorCore;
- (id)schemataNode;

@end
