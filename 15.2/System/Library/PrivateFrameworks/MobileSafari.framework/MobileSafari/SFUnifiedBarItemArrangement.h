@class NSArray;

@interface SFUnifiedBarItemArrangement : NSObject

@property (readonly, copy, nonatomic) NSArray *leadingItems;
@property (readonly, copy, nonatomic) NSArray *trailingItems;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithLeadingItems:(id)a0 trailingItems:(id)a1;
- (void)enumerateAllItemsUsingBlock:(id /* block */)a0;

@end
