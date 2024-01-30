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

+ (id)saltProviderFromKeyChain;
+ (id)saltProviderWithString:(id)a0;

- (id)_createSalt;
- (void)_deleteSalt;
- (id)_queryKeychainError:(out id *)a0;
- (id)init;
- (id)_findExistingSaltError:(out id *)a0;
- (id)_findOrCreateSalt;
- (void).cxx_destruct;
- (BOOL)migrateAccessClass;

@end
