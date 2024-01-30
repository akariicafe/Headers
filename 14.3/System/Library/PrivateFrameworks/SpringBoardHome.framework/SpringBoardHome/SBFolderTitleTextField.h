@class _UILegibilitySettings;

@interface SBFolderTitleTextField : UITextField

@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) BOOL showingEditUI;

+ (id)_clearButtonImage;
+ (void)warmupIfNecessary;
+ (id)_editBackgroundImage;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLegibility;
- (id)_clearButtonImage;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_backgroundImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setShowsEditUI:(BOOL)a0 animated:(BOOL)a1;

@end
