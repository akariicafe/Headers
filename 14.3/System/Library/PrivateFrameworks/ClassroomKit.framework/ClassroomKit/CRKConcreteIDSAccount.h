@class IDSAccount;

@interface CRKConcreteIDSAccount : NSObject <CRKIDSAccount>

@property (readonly, nonatomic) IDSAccount *account;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)listenForAccountActiveWithHandler:(id /* block */)a0;

@end
