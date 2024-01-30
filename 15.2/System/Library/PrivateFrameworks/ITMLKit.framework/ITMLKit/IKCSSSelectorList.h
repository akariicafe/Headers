@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying>

@property (readonly, nonatomic) IKMutableArray *selectors;

- (void)addSelector:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)selectorAtIndex:(unsigned long long)a0;
- (id)firstSelector;
- (id)lastSelector;

@end
