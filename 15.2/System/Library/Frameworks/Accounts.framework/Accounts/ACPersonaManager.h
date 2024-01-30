@class NSString, NSSet, NSArray, ACAccountStore;

@interface ACPersonaManager : NSObject {
    unsigned long long _personaGenerationID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _personaStorageLock;
    NSString *_enterprisePersonaUID;
    NSString *_personalPersonaUID;
    NSSet *_guestPersonasUID;
    NSArray *_dataSeparatedPersonasUIDs;
    ACAccountStore *_store;
}

@property (class, readonly, nonatomic) ACPersonaManager *sharedInstance;

@property (readonly, copy, nonatomic) NSString *enterprisePersonaUID;
@property (readonly, copy, nonatomic) NSString *personalPersonaUID;
@property (readonly, copy, nonatomic) NSSet *guestPersonasUIDs;
@property (readonly, copy, nonatomic) NSArray *dataSeparatedPersonasUIDs;

+ (void)performWithinPersonaForAccount:(id)a0 withBlock:(id /* block */)a1;
+ (void)_changePersonaContextUsingPersonaID:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)performWithinPersona:(id)a0 withBlock:(id /* block */)a1;
+ (void)performWithinPersonaForAccountIdentifier:(id)a0 withBlock:(id /* block */)a1;

- (void)updatePersonasUIDs;
- (void).cxx_destruct;
- (id)init;
- (void)_lockedUpdatePersonasUIDsIfNeeded;
- (id)store;

@end
