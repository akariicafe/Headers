@interface WKDateTimePickerViewController : UIViewController {
    struct CGSize { double width; double height; } _contentSize;
    struct RetainPtr<UIDatePicker> { void *m_ptr; } _datePicker;
    struct WeakObjCPtr<id<WKDateTimePickerViewControllerDelegate>> { id m_weakReference; } _delegate;
}

- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setDelegate:(id)a0;
- (id)initWithDatePicker:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredDatePickerSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })datePickerInsets;
- (void)resetButtonPressed:(id)a0;
- (void)doneButtonPressed:(id)a0;
- (id).cxx_construct;

@end
