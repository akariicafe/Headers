@class UIColor, NSString, UIAlertController, RUIObjectModel;
@protocol RUIAlertViewDelegate, RUIPresentationHandling;

@interface RUIAlertView : RUIElement {
    UIAlertController *_alertController;
    id<RUIPresentationHandling> _presentationContext;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) RUIObjectModel<RUIAlertViewDelegate> *objectModel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (readonly, nonatomic) long long buttonIndex;

+ (void)_enableTestMode;

- (void)dealloc;
- (void)_dismissAlertController;
- (void).cxx_destruct;
- (id)alertController;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (void)addButtonWithTitle:(id)a0 URL:(id)a1 style:(long long)a2 attributes:(id)a3;
- (void)runAlertInController:(id)a0 completion:(id /* block */)a1;

@end
