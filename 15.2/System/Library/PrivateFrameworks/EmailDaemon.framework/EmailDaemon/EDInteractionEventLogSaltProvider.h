@class NSData, NSString, NSObject;
@protocol OS_os_log;

@interface EDInteractionEventLogSaltProvider : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSData *salt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)saltProviderWithString:(id)a0;
+ (id)saltProviderFromKeyChain;

- (id)_findOrCreateSalt;
- (id)_createSalt;
- (void).cxx_destruct;
- (id)init;
- (void)_deleteSalt;
- (id)_findExistingSaltError:(out id *)a0;
- (id)_queryKeychainError:(out id *)a0;
- (BOOL)migrateAccessClass;

@end
