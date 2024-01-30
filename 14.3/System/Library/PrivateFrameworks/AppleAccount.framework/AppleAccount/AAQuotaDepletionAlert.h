@class NSString, ACAccountStore, ACAccount;

@interface AAQuotaDepletionAlert : NSObject {
    NSString *_dataclass;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
}

+ (BOOL)_isDisabledDataclass:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)showWithHandler:(id /* block */)a0;
- (id)initForDataclass:(id)a0;
- (BOOL)showIfNecessaryWithHandler:(id /* block */)a0;
- (id)_deviceSpecificLocalizedString:(id)a0;
- (id)_primaryAccount;

@end
