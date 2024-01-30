@interface NEPremiumBadgeRequest : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ style;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shineImageRequest;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ mask;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 color:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 mask:(id)a3 traitCollection:(id)a4;
- (id)initWithStyle:(long long)a0 color:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 mask:(id)a3 offset:(struct CGPoint { double x0; double x1; })a4 traitCollection:(id)a5;

@end
