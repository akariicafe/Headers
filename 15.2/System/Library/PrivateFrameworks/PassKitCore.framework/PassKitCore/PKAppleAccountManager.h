@class PKAppleAccountInformation, ACAccountStore;

@interface PKAppleAccountManager : NSObject {
    ACAccountStore *_accountStore;
}

@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (id)_aidaAccount;
- (id)_primaryAppleAccount;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
