@class UIColor, WFWorkflowIconDrawer;

@interface WFGlyphView : WFIconView

@property (readonly, nonatomic) WFWorkflowIconDrawer *iconDrawer;
@property (nonatomic) unsigned short glyphCharacter;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } glyphInsets;
@property (retain, nonatomic) UIColor *glyphColor;
@property (nonatomic) BOOL outline;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)redrawIcon;

@end
