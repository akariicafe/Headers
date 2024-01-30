@class NSURL, NSError, ICAgeVerifier, ICUserIdentity;

@interface ICAgeVerificationState : NSObject <NSCopying>

@property (readonly, copy, nonatomic) ICAgeVerifier *ageVerifier;
@property (readonly, nonatomic, getter=isDynamic) BOOL dynamic;
@property (readonly, nonatomic) long long treatment;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSURL *verificationURL;
@property (readonly, nonatomic, getter=isExplicitContentAllowed) BOOL explicitContentAllowed;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;

+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)a0;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)a0 withTreatment:(long long)a1;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)a0 withTreatment:(long long)a1 verificationURL:(id)a2;
+ (id)cachedStateForDSID:(id)a0;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)a0 withError:(id)a1;
+ (id)_stateFromDictionaryRepresentation:(id)a0 DSID:(id)a1;

- (id)_dictionaryRepresentationWithDSID:(id)a0;
- (id)initWithUserIdentity:(id)a0 ageVerifier:(id)a1 treatment:(long long)a2 verificationURL:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithUserIdentity:(id)a0 status:(long long)a1 treatment:(long long)a2 verificationURL:(id)a3 error:(id)a4;
- (void)saveToUserDefaults;
- (id)description;
- (void).cxx_destruct;

@end
