@interface TSMastheadViewLayoutOptions : NSObject {
    void /* unknown type, empty encoding */ bounds;
    void /* unknown type, empty encoding */ statusBarFrame;
    void /* unknown type, empty encoding */ navigationBarFrame;
    void /* unknown type, empty encoding */ displayOptions;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ layoutMargins;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ traitCollection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 traitCollection:(id)a2 statusBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 navigationBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 displayOptions:(id)a5;

@end
