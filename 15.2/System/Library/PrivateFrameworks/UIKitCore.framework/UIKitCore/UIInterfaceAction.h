@class UIView, NSString, UIInterfaceActionRepresentationView, UIImage, UIInterfaceActionVisualStyle, UIViewController, NSPointerArray, UIColor;
@protocol _UIInterfaceActionPresenting;

@interface UIInterfaceAction : NSObject <NSCopying>

@property (retain, nonatomic) UIViewController *customContentViewController;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSPointerArray *weakDisplayPropertyObservers;
@property (readonly, nonatomic) long long _typeForDeterminingViewRepresentation;
@property (readonly, nonatomic) UIView *customContentView;
@property (weak, nonatomic, setter=_setVisualRepresentation:) UIInterfaceActionRepresentationView *_visualRepresentation;
@property (weak, nonatomic, setter=_setPresentingController:) id<_UIInterfaceActionPresenting> _presentingController;
@property (nonatomic) struct CGSize { double width; double height; } leadingImageLayoutSize;
@property (nonatomic) struct CGSize { double width; double height; } trailingImageLayoutSize;
@property (nonatomic, getter=_isPreferred, setter=_setIsPreferred:) BOOL preferred;
@property (nonatomic, getter=_isFocused, setter=_setIsFocused:) BOOL focused;
@property (retain, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle;
@property (retain, nonatomic, getter=_titleTextColor, setter=_setTitleTextColor:) UIColor *titleTextColor;
@property (retain, nonatomic, getter=_imageTintColor, setter=_setImageTintColor:) UIColor *imageTintColor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titleAlignment;
@property (copy, nonatomic) NSString *classificationTitle;
@property (retain, nonatomic) UIImage *leadingImage;
@property (retain, nonatomic) UIImage *trailingImage;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(BOOL)a0;
+ (id)actionWithCustomContentView:(id)a0 handler:(id /* block */)a1;
+ (id)actionWithCustomContentViewController:(id)a0;
+ (id)actionWithTitle:(id)a0 type:(long long)a1 handler:(id /* block */)a2;
+ (id)_observableDisplayProperties;
+ (BOOL)changedProperties:(id)a0 containsAny:(id)a1;

- (id)initWithTitle:(id)a0 type:(long long)a1 customContentViewController:(id)a2 customContentView:(id)a3 handler:(id /* block */)a4;
- (void)_removeActionDisplayPropertyObserver:(id)a0;
- (id)description;
- (void)_invokeHandlerWithCompletionBlock:(id /* block */)a0;
- (void)_addActionDisplayPropertyObserver:(id)a0;
- (void)_notifyObserversVisualStyleDidChange;
- (void)_notifyObserversDidChangeActionProperty:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutSizeForImageProperty:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
