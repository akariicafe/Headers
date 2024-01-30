@class IDSAccountController, NSString;

@interface CRKConcreteIDSAccountAdditionListener : NSObject <IDSAccountControllerDelegate, CRKIDSListener>

@property (readonly, nonatomic) IDSAccountController *accountController;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listenerWithServiceName:(id)a0 handler:(id /* block */)a1;

- (void)accountController:(id)a0 accountAdded:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithAccountController:(id)a0 handler:(id /* block */)a1;

@end
