@class NSString, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface PCSAccountsModel : NSObject

@property (retain) ACAccountStore *store;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL accountsChanged;
@property (readonly) NSString *username;
@property (readonly) NSString *dsid;
@property (readonly) NSString *identifier;
@property (readonly) NSString *lastError;

+ (id)accountForCurrentPersona;
+ (id)settingsKeyForKey:(id)a0 error:(id *)a1;
+ (id)defaultAccountsModel;
+ (BOOL)currentPersonaSupportsPrimaryAccount:(id *)a0;

- (void)_accountStoreDidChange:(id)a0;
- (void)update;
- (id)init;
- (void)faultIfCurrentPersonaIsDataSeparated;
- (void).cxx_destruct;

@end
