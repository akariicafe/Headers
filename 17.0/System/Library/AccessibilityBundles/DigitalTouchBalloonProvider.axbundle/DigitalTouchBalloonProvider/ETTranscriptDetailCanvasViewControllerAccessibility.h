@interface ETTranscriptDetailCanvasViewControllerAccessibility : __ETTranscriptDetailCanvasViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)accessibilityPerformEscape;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)updateVideoUI;
- (id)_accessibilityCameraFlipButtonLabelForCurrentCamera;
- (void)videoControllerDidStartPreview:(id)a0;
- (id)_accessibilityStringForCurrentCameraPosition;
- (void)_axFocusChanged:(id)a0;
- (void)_cameraFlipButtonTapped;
- (void)_expandColorPickerButtonTapped;
- (void)_sendButtonTapped;
- (void)_setShowingGestureInstructionView:(BOOL)a0;
- (void)_startShowCompositionControlsTimer;
- (void)colorPicker:(id)a0 requestsDismissColorWheel:(id)a1;
- (void)colorPicker:(id)a0 requestsPresentColorWheel:(id)a1;
- (void)expandUI;
- (void)videoControllerDidStopPreview:(id)a0;

@end
