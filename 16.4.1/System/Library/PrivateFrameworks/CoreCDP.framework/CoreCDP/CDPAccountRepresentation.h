@class NSString, CDPContext, ACAccount, ACAccountStore, AKAccountManager;

@interface CDPAccountRepresentation : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) AKAccountManager *accountManager;
@property (readonly, nonatomic) ACAccount *appleAccount;
@property (readonly, nonatomic) ACAccount *authKitAccount;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *DSID;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *authenticationToken;
@property (readonly, copy, nonatomic) NSString *escrowURLString;
@property (readonly, copy, nonatomic) NSString *iCloudEnvironment;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *stashedPRK;
@property (readonly, nonatomic) unsigned long long securityLevel;
@property (readonly, nonatomic) BOOL isBeneficiary;
@property (readonly, nonatomic) BOOL isICDPEnabled;
@property (readonly, nonatomic) BOOL isSilentEscrowRecordRepairEnabled;
@property (readonly, nonatomic) BOOL shouldPerformSilentEscrowRecordRepair;
@property (readonly, copy, nonatomic) CDPContext *generatedContext;

+ (id)representationForPrimaryAccount;
+ (id)representationForAccount:(id)a0;
+ (id)representationForAltDSID:(id)a0;

- (id)initWithAccount:(id)a0;
- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;
- (void)_cachePropertyValue:(id)a0 forKey:(id)a1 lastModifiedDate:(id)a2 account:(id)a3 saveHandler:(id /* block */)a4;
- (id)_cachedPropertyValueOfClass:(Class)a0 forKey:(id)a1 staleModifiedDate:(id)a2 account:(id)a3 isStale:(BOOL *)a4;
- (id)_cachedPropertyValueOfClass:(Class)a0 forKey:(id)a1 valueProducer:(id /* block */)a2;
- (id)_cachedPropertyValueOfClass:(Class)a0 forKey:(id)a1 valueProducer:(id /* block */)a2 checkForStale:(BOOL)a3 account:(id)a4;
- (id)_cachedPropertyValueOfClass:(Class)a0 forKey:(id)a1 valueProducer:(id /* block */)a2 checkForStale:(BOOL)a3 account:(id)a4 saveHandler:(id /* block */)a5;
- (id)_cachedPropertyValueOfClass:(Class)a0 forKey:(id)a1 valueProducer:(id /* block */)a2 saveHandler:(id /* block */)a3;
- (id)_cachedPropertyValueOfClass:(Class)a0 forKey:(id)a1 valueProducer:(id /* block */)a2 staleModifiedDate:(id)a3 account:(id)a4 saveHandler:(id /* block */)a5;
- (id)_deserializedPropertyDictionaryForData:(id)a0 withPropertyValueOfClass:(Class)a1 error:(id *)a2;
- (id)_serializedPropertyDictionaryWithValue:(id)a0 lastModifiedDate:(id)a1 error:(id *)a2;
- (id)initWithAltDSID:(id)a0 accountStore:(id)a1 accountManager:(id)a2;
- (BOOL)isICDPEnabledByCheckingWithServer:(BOOL)a0;
- (void)silentEscrowRecordRepairEnabledWithCompletion:(id /* block */)a0;

@end
