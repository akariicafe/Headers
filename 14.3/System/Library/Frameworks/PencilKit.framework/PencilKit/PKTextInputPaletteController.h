@class PKTextInputWindowFirstResponderController, UIWindowScene, PKPaletteController, PKTextInputSettings, NSString;
@protocol PKTextInputPaletteControllerDelegate;

@interface PKTextInputPaletteController : NSObject <PKTextInputWindowFirstResponderControllerDelegate, PKPaletteControllerDelegate, PKPaletteTapToRadarCommandDelegate>

@property (retain, nonatomic) PKTextInputSettings *_textInputSettings;
@property (retain, nonatomic) PKTextInputWindowFirstResponderController *_windowFirstResponderController;
@property (retain, nonatomic) PKPaletteController *_paletteController;
@property (weak, nonatomic) id<PKTextInputPaletteControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isPaletteVisible) BOOL paletteVisible;
@property (nonatomic, getter=_isWritingStateActive, setter=_setWritingStateActive:) BOOL _writingStateActive;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editingOverlayContainerSceneBounds;
@property (readonly, nonatomic) UIWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateFirstResponderVisibility;
- (id)paletteTapToRadarCommandConfiguration:(id)a0;
- (void)_recognitionLocaleIdentifierDidChange:(id)a0;
- (id)initWithTextInputSettings:(id)a0;
- (void)_updatePaletteVisibility;
- (BOOL)_canShowPaletteUI;
- (BOOL)_isFirstResponderVisible;
- (BOOL)_isFirstResponderEditableTextInputWithPencilTextInputSource;
- (BOOL)_isFirstResponderInputAssistantEnabled;
- (void)_peformPaletteVisibilityUpdate;
- (BOOL)_shouldPaletteBeVisible;
- (id)_paletteControllerContainerView;
- (void)_setupPaletteControllerIfNeededWithView:(id)a0 wantsPaletteVisible:(BOOL)a1;
- (void)windowFirstResponderController:(id)a0 didChangeFirstResponder:(id)a1;
- (void)paletteControllerFloatingKeyboardWillShow:(id)a0;
- (void)paletteControllerFloatingKeyboardWillHide:(id)a0;
- (BOOL)paletteController:(id)a0 shouldOverridePaletteViewTraitCollectionTo:(id)a1;

@end
