@class NSString, WKContentView;

@interface WKColorPicker : NSObject <WKFormControl, UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    WKContentView *_view;
    struct RetainPtr<UIColorPickerViewController> { void *m_ptr; } _colorPickerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void)colorPickerViewControllerDidSelectColor:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)colorPickerViewControllerDidFinish:(id)a0;
- (void).cxx_destruct;
- (id)controlView;
- (void)selectColor:(id)a0;
- (id)focusedElementSuggestedColors;
- (void)updateColorPickerState;
- (void)configurePresentation;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id).cxx_construct;

@end
