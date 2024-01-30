@class IKMutableArray;

@interface IKCSSDeclarationList : NSObject <NSCopying>

@property (readonly, nonatomic) IKMutableArray *declarations;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)count;
- (id)declarationAtIndex:(unsigned long long)a0;
- (void)addDeclaration:(id)a0;
- (id)firstDeclaration;
- (id)lastDeclaration;

@end
