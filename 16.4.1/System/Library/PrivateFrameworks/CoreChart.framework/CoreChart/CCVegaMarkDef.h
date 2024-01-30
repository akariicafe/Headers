@class CCVegaCARenderer;

@interface CCVegaMarkDef : NSObject <CCVegaMarkDefInterface>

@property (weak) CCVegaCARenderer *delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)enterMultiMark:(id)a0;
- (BOOL)isMultiItemMark;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForMark:(id)a0 layer:(id)a1;
- (id)enterMark:(id)a0;
- (id)updateMark:(id)a0;
- (id)updateMultiMark:(id)a0;

@end
