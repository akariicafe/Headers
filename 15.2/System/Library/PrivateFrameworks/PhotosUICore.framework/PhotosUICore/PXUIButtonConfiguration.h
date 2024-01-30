@interface PXUIButtonConfiguration : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestOutset;
@property (nonatomic) BOOL allowAnimatedHighlighting;
@property (nonatomic) long long cursorEffect;

+ (id)configurationWithCursorEffect:(long long)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
