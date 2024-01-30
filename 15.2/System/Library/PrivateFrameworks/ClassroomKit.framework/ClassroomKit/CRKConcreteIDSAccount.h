@class NSString, IDSAccount;

@interface CRKConcreteIDSAccount : NSObject <IDSAccountDelegate, CRKIDSAccount>

@property (retain, nonatomic) IDSAccount *account;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *loginID;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)updateWithAccount:(id)a0;
- (void)updateIsActive;

@end
