@class PKAppleAccountInformation, ACAccountStore;

@interface PKAppleAccountManager : NSObject {
    ACAccountStore *_accountStore;
}

@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)_primaryAppleAccount;
- (id)_aidaAccount;
- (void).cxx_destruct;

@end
