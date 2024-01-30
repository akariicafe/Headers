@interface BEAlertController : UIAlertController

@property (nonatomic) BOOL isSheet;
@property (nonatomic) long long alertTag;

+ (id)showTwoButtonAlertWithTitle:(id)a0 message:(id)a1 button1Title:(id)a2 button1Style:(long long)a3 button1Handler:(id /* block */)a4 button2Title:(id)a5 button2Style:(long long)a6 button2Handler:(id /* block */)a7;
+ (id)showOneButtonAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 buttonHandler:(id /* block */)a3;
+ (id)showOneButtonSheetOnViewController:(id)a0 withTitle:(id)a1 message:(id)a2 buttonTitle:(id)a3 buttonHandler:(id /* block */)a4;
+ (id)showTwoButtonSheetOnViewController:(id)a0 withTitle:(id)a1 message:(id)a2 button1Title:(id)a3 button1Style:(long long)a4 button1Handler:(id /* block */)a5 button2Title:(id)a6 button2Style:(long long)a7 button2Handler:(id /* block */)a8;

- (long long)buttonCount;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)textFieldCount;
- (void)showAnimated:(BOOL)a0;
- (id)cancelButtonAction;
- (void)dismissWithNoActionAnimated:(BOOL)a0;
- (void)dismissWithCancelActionAnimated:(BOOL)a0;
- (id)initAlertWithTitle:(id)a0 message:(id)a1;
- (id)addAlertCancelButtonWithTitle:(id)a0 tag:(long long)a1 action:(id /* block */)a2;
- (id)initSheetWithTitle:(id)a0 message:(id)a1;
- (void)showOnViewController:(id)a0 animated:(BOOL)a1;
- (id)addAlertButtonWithTitle:(id)a0 style:(long long)a1 tag:(long long)a2 action:(id /* block */)a3;
- (id)initWithStyle:(long long)a0 title:(id)a1 message:(id)a2;
- (id)buttonActionWithTag:(long long)a0;
- (id)textFieldWithTag:(long long)a0;
- (void)addAlertButton:(id)a0;
- (id)addAlertButtonWithTitle:(id)a0 tag:(long long)a1 action:(id /* block */)a2;
- (id)addAlertDestructiveButtonWithTitle:(id)a0 tag:(long long)a1 action:(id /* block */)a2;
- (void)addAlertTextFieldWithTag:(long long)a0 configurationBlock:(id /* block */)a1;
- (void)showInView:(id)a0 viewController:(id)a1 animated:(BOOL)a2;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 viewController:(id)a2 arrowDirection:(unsigned long long)a3 animated:(BOOL)a4;
- (void)dismissWithActionForTag:(long long)a0 animated:(BOOL)a1;
- (id)textInFieldWithTag:(long long)a0;

@end
