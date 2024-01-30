@class PKToolPicker, PKTool, NSString, ICInkToolPickerResponder, UIView;
@protocol ICInkPaletteControllerDelegate;

@interface ICInkPaletteController : NSObject <PKToolPickerObserver, PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate>

@property (weak, nonatomic) UIView *parentView;
@property (weak, nonatomic) ICInkToolPickerResponder *responder;
@property (weak, nonatomic) id<ICInkPaletteControllerDelegate> delegate;
@property (retain, nonatomic) PKToolPicker *toolPicker;
@property (retain, nonatomic) PKTool *storedSelectedTool;
@property (nonatomic) long long palettePosition;
@property (nonatomic) long long storedColorUserInterfaceStyle;
@property (nonatomic) BOOL isSystemPaperUI;
@property (copy, nonatomic) PKTool *selectedTool;
@property (readonly, nonatomic) PKTool *colorCorrectedTool;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly, nonatomic, getter=isHandwritingToolSelected) BOOL handwritingToolSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedToolPickerForWindow:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_colorPickerPopoverPresentationSourceRect:(id)a0;
- (id)_colorPickerPopoverPresentationSourceView:(id)a0;
- (void)_toolPicker:(id)a0 didChangeColor:(id)a1;
- (void)_toolPicker:(id)a0 shouldSetVisible:(BOOL)a1;
- (void)_toolPickerDidChangePosition:(id)a0;
- (void)hideInkPaletteAnimated:(BOOL)a0;
- (id)initWithParentView:(id)a0 responder:(id)a1 delegate:(id)a2 isSystemPaperUI:(BOOL)a3;
- (BOOL)isInkPaletteShowing;
- (void)resetToPencilKitCompatibleInk;
- (void)showInkPalette:(BOOL)a0 animated:(BOOL)a1;
- (void)showInkPaletteAnimated:(BOOL)a0;
- (void)toolPickerFramesObscuredDidChange:(id)a0;
- (void)toolPickerIsRulerActiveDidChange:(id)a0;
- (void)toolPickerSelectedToolDidChange:(id)a0;
- (void)updateTraitCollection:(id)a0;

@end
