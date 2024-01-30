@class NSString, IDSAccount;

@interface CRKConcreteIDSAccountActiveListener : NSObject <IDSAccountDelegate, CRKIDSListener>

@property (readonly, nonatomic) IDSAccount *account;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listenerWithAccount:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)invalidate;
- (id)initWithAccount:(id)a0 handler:(id /* block */)a1;

@end
