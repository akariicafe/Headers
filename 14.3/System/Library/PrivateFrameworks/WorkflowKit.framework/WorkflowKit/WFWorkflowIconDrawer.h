@class WFColor, WFWorkflowIconDrawerContext, NSData;

@interface WFWorkflowIconDrawer : NSObject

@property (readonly, nonatomic) WFWorkflowIconDrawerContext *drawerContext;
@property (nonatomic) unsigned short glyphCharacter;
@property (retain, nonatomic) WFColor *backgroundColor;
@property (copy, nonatomic) NSData *customImageData;
@property (retain, nonatomic) WFColor *glyphColor;
@property (nonatomic) struct CGSize { double width; double height; } glyphSize;
@property (nonatomic) BOOL drawBackground;
@property (nonatomic) BOOL useCustomImage;
@property (nonatomic) BOOL rounded;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL dark;
@property (nonatomic) BOOL highContrast;
@property (nonatomic) BOOL outline;

+ (id)imageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1 background:(BOOL)a2;
+ (id)imageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 glyphColor:(id)a3 background:(BOOL)a4;
+ (id)imageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)glyphImageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)pngDataForImageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)initWithIcon:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setIcon:(id)a0;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawInContext:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithIcon:(id)a0 drawerContext:(id)a1;
- (id)initWithHomeScreenIcon:(id)a0;
- (id)initWithDrawerContext:(id)a0;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
