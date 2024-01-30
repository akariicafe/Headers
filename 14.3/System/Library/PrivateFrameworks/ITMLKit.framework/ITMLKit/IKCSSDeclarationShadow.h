@class NSShadow;

@interface IKCSSDeclarationShadow : IKCSSDeclaration

@property (retain, nonatomic) NSShadow *value;

- (void).cxx_destruct;
- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)a0 info:(id)a1;

@end
