@class NSString, NSSet, NSArray, NSObject, ACAccountStore;
@protocol OS_dispatch_queue;

@interface ACPersonaManager : NSObject <UMUserPersonaUpdateObserver> {
    NSObject<OS_dispatch_queue> *_backgroundPersonaUpdate;
    BOOL _registered;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)performWithinPersonaForAccount:(id)a0 withBlock:(id /* block */)a1;
+ (BOOL)performWithinPersona:(id)a0 withBlock:(id /* block */)a1;
+ (void)performWithinPersonaForAccountIdentifier:(id)a0 withBlock:(id /* block */)a1;
+ (void)_changePersonaContextUsingPersonaID:(id)a0 withCompletion:(id /* block */)a1;

- (id)init;
- (void)personaListDidUpdate;
- (id)store;
- (void).cxx_destruct;
- (void)updatePersonasUIDs;
- (void)_registerForPersonaListUpdateWithCompletion:(id /* block */)a0;

@end
