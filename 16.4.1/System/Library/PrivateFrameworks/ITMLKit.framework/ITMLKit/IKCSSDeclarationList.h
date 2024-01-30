@class IKMutableArray;

@interface IKCSSDeclarationList : NSObject <NSCopying>

@property (readonly, nonatomic) IKMutableArray *declarations;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addDeclaration:(id)a0;
- (id)lastDeclaration;
- (id)declarationAtIndex:(unsigned long long)a0;
- (id)firstDeclaration;

@end
