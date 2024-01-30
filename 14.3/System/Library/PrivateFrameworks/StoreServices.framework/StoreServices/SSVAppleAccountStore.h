@class NSObject, ACAccount, ACAccountStore;
@protocol OS_dispatch_queue;

@interface SSVAppleAccountStore : NSObject {
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ACAccount *_primaryAppleAccount;
}

@property (readonly) ACAccount *primaryAppleAccount;

+ (id)sharedAccountStore;

- (id)init;
- (void)_accountStoreDidChangeNotification:(id)a0;
- (void).cxx_destruct;

@end
