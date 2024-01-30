@class UIColor, NSString, UIAlertController, UIImage, UIInterfaceAction, UIViewController;
@protocol UIAlertActionViewRepresentation_Internal, UIAlertActionMutablePropertyObservering;

@interface UIAlertAction : NSObject <NSCopying> {
    long long _titleTextAlignment;
    BOOL _enabled;
    BOOL _checked;
    BOOL _isPreferred;
    UIColor *_imageTintColor;
    UIColor *_titleTextColor;
}

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ simpleHandler;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ shouldDismissHandler;
@property (copy, nonatomic, setter=_setDescriptiveText:) NSString *_descriptiveText;
@property (retain, nonatomic, getter=_contentViewController, setter=_setContentViewController:) UIViewController *contentViewController;
@property (copy, nonatomic, getter=_keyCommandInput, setter=_setKeyCommandInput:) NSString *keyCommandInput;
@property (nonatomic, getter=_keyCommandModifierFlags, setter=_setKeyCommandModifierFlags:) long long keyCommandModifierFlags;
@property (setter=_setRepresenter:) id<UIAlertActionViewRepresentation_Internal> _representer;
@property (setter=_setInterfaceActionRepresentation:) UIInterfaceAction<UIAlertActionMutablePropertyObservering> *_interfaceActionRepresentation;
@property (setter=_setIsPreferred:) BOOL _isPreferred;
@property (nonatomic, setter=_setAlertController:) UIAlertController *_alertController;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)_actionWithTitle:(id)a0 descriptiveText:(id)a1 image:(id)a2 style:(long long)a3 handler:(id /* block */)a4 shouldDismissHandler:(id /* block */)a5;
+ (id)_actionWithTitle:(id)a0 image:(id)a1 style:(long long)a2 handler:(id /* block */)a3 shouldDismissHandler:(id /* block */)a4;
+ (id)_actionWithContentViewController:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (id)_actionWithContentViewController:(id)a0 style:(long long)a1;
+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void)_setTitleTextColor:(id)a0;
- (BOOL)_isChecked;
- (void)_setKeyCommandInput:(id)a0 modifierFlags:(long long)a1;
- (id)_titleTextColor;
- (id)_imageTintColor;
- (long long)_titleTextAlignment;
- (void)_willAddContentViewController;
- (void)_setImageTintColor:(id)a0;
- (void)_didAddContentViewController;
- (void)_setChecked:(BOOL)a0;
- (void)_setTitleTextAlignment:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
