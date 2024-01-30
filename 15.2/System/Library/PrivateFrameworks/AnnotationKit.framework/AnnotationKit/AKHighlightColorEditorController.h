@class NSString, AKCalloutBar, UIAlertController, UIView, UIButton;

@interface AKHighlightColorEditorController : AKAnnotationPopoverViewController <UIPopoverControllerDelegate>

@property (retain, nonatomic) AKCalloutBar *calloutBar;
@property (retain, nonatomic) UIView *colorControls;
@property (retain, nonatomic) UIButton *addNoteButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *rightArrowButton;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIAlertController *alertController;
@property (nonatomic) int pageTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPosition:(int)a0;
- (void)viewDidLoad;
- (void)didShow;
- (void)willShow;
- (void)loadView;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)useColorOf:(id)a0;
- (void)showColorControlsMenu:(id)a0;
- (void)handleDeleteButtonTap:(id)a0;
- (void)handleAddNoteButton:(id)a0;
- (void)handleRightArrowButton:(id)a0;
- (void)releaseOutlets;
- (BOOL)p_shouldShowCompactMenu;
- (long long)p_buttonTagForTheme:(id)a0;
- (id)p_paletteImageForTag:(long long)a0 pageTheme:(int)a1;
- (id)p_noteGlyphForTag:(long long)a0 pageTheme:(int)a1;
- (BOOL)p_shouldShowShareButton;
- (void)handleShareButton:(id)a0;
- (void)p_updateAppearance;
- (id)p_colorControlImageForTag:(long long)a0 pageTheme:(int)a1;
- (id)localizedAccessibilityStringForStyle:(long long)a0;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;
- (id)p_themeForStyle:(long long)a0 pageTheme:(int)a1;
- (void)p_removeAnnotation:(id)a0;
- (void)p_setStyle:(long long)a0 forAnnotation:(id)a1;
- (void)p_drawColorControlCircleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
- (id)p_colorControlImageForColor:(id)a0 withForegroundImage:(id)a1;
- (id)p_colorForTag:(long long)a0 pageTheme:(int)a1;
- (id)p_underlineForegroundImageForPageTheme:(int)a0;
- (id)p_colorControlImageForColor:(id)a0;
- (id)p_colorControlUnderlineImageForPageTheme:(int)a0;
- (void)p_drawCrescentWithCircleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 leftShift:(double)a2 addRadius:(double)a3;
- (id)p_paletteImageWithFrontColor:(id)a0 middleColor:(id)a1 backColor:(id)a2 frontForegroundImage:(id)a3;
- (id)p_buildPaletteImageForFrontTag:(long long)a0 middleTag:(long long)a1 backTag:(long long)a2 pageTheme:(int)a3;
- (id)p_monochromaticImageFromImage:(id)a0 withColor:(id)a1;
- (BOOL)canPresentInPosition:(int)a0;
- (void)p_postDeleteConfirmation;

@end
