@class NSString, ACAccount, ACAccountStore;

@interface AAGrandSlamSigner : NSObject {
    NSString *_appTokenID;
}

@property (readonly, nonatomic) ACAccount *grandSlamAccount;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL useAltDSID;
@property (retain, nonatomic) NSString *headerFieldKey;

- (void).cxx_destruct;
- (BOOL)signURLRequest:(id)a0 isUserInitiated:(BOOL)a1;
- (id)initWithAppleAccount:(id)a0 grandSlamAccount:(id)a1 accountStore:(id)a2 appTokenID:(id)a3;
- (BOOL)signURLRequest:(id)a0;
- (id)initWithAccountStore:(id)a0 grandSlamAccount:(id)a1 appTokenID:(id)a2;

@end
