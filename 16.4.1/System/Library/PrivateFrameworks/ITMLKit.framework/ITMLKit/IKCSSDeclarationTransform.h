@interface IKCSSDeclarationTransform : IKCSSDeclaration

@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (id)stringValue;
- (id)initWithParseDeclaration:(id)a0 info:(id)a1;

@end
