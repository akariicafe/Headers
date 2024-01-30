@class IKCSSMediaQuery, IKCSSSelectorList, IKCSSDeclarationList;

@interface IKCSSRule : NSObject <NSCopying>

@property (retain, nonatomic) IKCSSSelectorList *selectorList;
@property (retain, nonatomic) IKCSSDeclarationList *declarationList;
@property (readonly, nonatomic) IKCSSMediaQuery *mediaQuery;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
