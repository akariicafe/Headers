@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying>

@property (readonly, nonatomic) IKMutableArray *selectors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addSelector:(id)a0;
- (id)firstSelector;
- (id)lastSelector;
- (id)selectorAtIndex:(unsigned long long)a0;

@end
