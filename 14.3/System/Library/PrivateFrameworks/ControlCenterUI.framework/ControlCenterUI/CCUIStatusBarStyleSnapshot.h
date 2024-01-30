@class NSString, UIStatusBarStyleRequest;

@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying>

@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *hiddenPartIdentifier;
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *leadingStyleRequest;
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *trailingStyleRequest;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avoidanceFrame;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } statusBarInsets;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHidden:(BOOL)a0 hiddenPartIdentifier:(id)a1 leadingStyleRequest:(id)a2 trailingStyleRequest:(id)a3 statusBarInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 avoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;

@end
