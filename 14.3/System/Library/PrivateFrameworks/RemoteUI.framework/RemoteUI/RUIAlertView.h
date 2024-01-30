@class RUIObjectModel, NSString, UIAlertController;
@protocol RUIAlertViewDelegate, RUIPresentationHandling;

@interface RUIAlertView : RUIElement {
    UIAlertController *_alertController;
    id<RUIPresentationHandling> _presentationContext;
}

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) RUIObjectModel<RUIAlertViewDelegate> *objectModel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (readonly, nonatomic) long long buttonIndex;

+ (void)_enableTestMode;

- (void).cxx_destruct;
- (void)dealloc;
- (id)alertController;
- (void)_dismissAlertController;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (void)runAlertInController:(id)a0 completion:(id /* block */)a1;
- (void)addButtonWithTitle:(id)a0 URL:(id)a1 style:(long long)a2 attributes:(id)a3;

@end
