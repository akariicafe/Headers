@class NSArray;

@interface SFUnifiedTabBarItemAccessoryButtonArrangement : NSObject

@property (readonly, copy, nonatomic) NSArray *leadingButtonTypes;
@property (readonly, copy, nonatomic) NSArray *trailingButtonTypes;

- (void).cxx_destruct;
- (id)init;
- (id)initUsingButtonLayout:(long long)a0 filteringButtonsUsingBlock:(id /* block */)a1;
- (id)initWithLeadingButtonTypes:(id)a0 trailingButtonTypes:(id)a1;
- (BOOL)isEqualToArrangement:(id)a0;

@end
