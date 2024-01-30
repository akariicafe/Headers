@class CNPhotoPickerActionButtonBlockHandler;

@interface CNPhotoPickerActionButton : UIButton

@property (nonatomic) BOOL isDestructive;
@property (retain, nonatomic) CNPhotoPickerActionButtonBlockHandler *blockHandler;

+ (id)buttonWithTitle:(id)a0 actionBlock:(id /* block */)a1;
+ (id)defaultButtonWithTitle:(id)a0 actionBlock:(id /* block */)a1;
+ (id)destructiveButtonWithTitle:(id)a0 actionBlock:(id /* block */)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)performActionBlock;

@end
