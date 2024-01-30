@class UIKBAutoFillTestTagRequest, NSString, NSArray, UIPickerView, UIToolbar, UIVisualEffectView, UIBarButtonItem, UILabel;
@protocol UIKBAutoFillTestTaggerViewDelegate;

@interface UIKBAutoFillTestTaggerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIKBAutoFillTestTagRequest *_currentRequest;
    UIPickerView *_pickerView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_nextBarButtoItem;
    UIBarButtonItem *_previousBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIVisualEffectView *_visualEffectView;
    UILabel *_titleLabel;
}

@property (weak, nonatomic) id<UIKBAutoFillTestTaggerViewDelegate> delegate;
@property (copy, nonatomic) NSArray *tagRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_textFieldTypes;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)_doneBarButtonAction:(id)a0;
- (id)_formTypes;
- (void)_nextBarButtonAction:(id)a0;
- (void)_performTagRequest:(id)a0;
- (void)_previousBarButtonAction:(id)a0;
- (void)_updateToolbarButtons;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;

@end
