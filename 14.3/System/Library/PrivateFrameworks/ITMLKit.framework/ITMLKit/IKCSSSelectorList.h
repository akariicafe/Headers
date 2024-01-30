@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying>

@property (readonly, nonatomic) IKMutableArray *selectors;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)count;
- (void)addSelector:(id)a0;
- (id)selectorAtIndex:(unsigned long long)a0;
- (id)firstSelector;
- (id)lastSelector;

@end
