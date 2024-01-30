@class NSString, WKContentView;

@interface WKColorPicker : NSObject <WKFormControl, UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    WKContentView *_view;
    struct RetainPtr<UIColorPickerViewController> { void *m_ptr; } _colorPickerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (id).cxx_construct;
- (id)initWithView:(id)a0;
- (id)controlView;
- (void).cxx_destruct;
- (void)colorPickerViewControllerDidFinish:(id)a0;
- (void)colorPickerViewControllerDidSelectColor:(id)a0;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)configurePresentation;
- (id)focusedElementSuggestedColors;
- (void)selectColor:(id)a0;
- (void)updateColorPickerState;

@end
