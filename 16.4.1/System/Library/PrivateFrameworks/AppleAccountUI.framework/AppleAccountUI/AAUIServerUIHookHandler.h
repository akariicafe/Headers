@class NSArray, UIViewController, AAUIServerHookHandlerDelegate;

@interface AAUIServerUIHookHandler : RUIServerHookHandler {
    AAUIServerHookHandlerDelegate *_delegate;
}

@property (class, readonly) NSArray *fcui_defaultFresnoServerHooks;

@property (retain, nonatomic) UIViewController *presentingControllerOverride;

- (id)init;
- (void).cxx_destruct;

@end
