@class NSArray;

@interface UICellAccessoryConfiguration : NSObject {
    BOOL _leadingAlwaysNeedsLayout;
    BOOL _trailingAlwaysNeedsLayout;
}

@property (copy, nonatomic) NSArray *leadingAccessories;
@property (copy, nonatomic) NSArray *trailingAccessories;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)alwaysNeedsLayout;

@end
