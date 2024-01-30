@class NSString, UIFontDescriptor, UIFontPickerViewController;
@protocol UIFontPickerDelegate;

@interface UIFontPickerController : NSObject <UIFontPickerDelegate, UIFontPicker> {
    UIFontPickerController *_strongSelf;
    UIFontPickerViewController *_pickerController;
}

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) UIFontDescriptor *selectedFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIFontDescriptor *selectedFontDescriptor;
@property (weak, nonatomic) id<UIFontPickerDelegate> delegate;

- (void)fontPickerDidPickFont:(id)a0;
- (void)fontPickerWasCancelled:(id)a0;
- (BOOL)presentFontPickerFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2;
- (BOOL)presentFontPickerFromBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)remoteViewController;

@end
