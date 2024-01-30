@class NSString, CNContactAction;
@protocol CNQuickContactActionDelegate;

@interface CNQuickContactAction : CNQuickAction <CNContactActionDelegate>

@property (retain, nonatomic) CNContactAction *contactAction;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) id<CNQuickContactActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performWithCompletionBlock:(id /* block */)a0;
- (id)initWithContactAction:(id)a0;
- (void)action:(id)a0 presentViewController:(id)a1 sender:(id)a2;
- (void)action:(id)a0 prepareChildContactViewController:(id)a1 sender:(id)a2;
- (void)action:(id)a0 pushViewController:(id)a1 sender:(id)a2;
- (void)action:(id)a0 dismissViewController:(id)a1 sender:(id)a2;
- (void)actionDidUpdate:(id)a0;
- (void)actionWasCanceled:(id)a0;
- (id)contactViewCache;
- (void)actionDidFinish:(id)a0;

@end
