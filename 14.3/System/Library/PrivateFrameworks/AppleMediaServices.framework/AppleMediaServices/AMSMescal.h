@class AMSBagKeySet, NSString;

@interface AMSMescal : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)verifyTask:(id)a0 data:(id)a1 type:(long long)a2 bagContract:(id)a3 error:(id *)a4;
+ (BOOL)primeTheConnectionWithContract:(id)a0 logKey:(id)a1 error:(id *)a2;
+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;
+ (id)_matchSignedActions:(id)a0 withURL:(id)a1 error:(id *)a2;
+ (id)signatureFromData:(id)a0 type:(long long)a1 bagContract:(id)a2 error:(id *)a3;
+ (id)signatureFromData:(id)a0 type:(long long)a1 bagContract:(id)a2 logKey:(id)a3 error:(id *)a4;
+ (id)signatureFromData:(id)a0 type:(long long)a1 bag:(id)a2 error:(id *)a3;
+ (id)signatureUsingRequest:(id)a0 type:(long long)a1 bag:(id)a2 error:(id *)a3;
+ (BOOL)primeTheConnectionWithBag:(id)a0 error:(id *)a1;
+ (id)signatureUsingRequest:(id)a0 type:(long long)a1 bagContract:(id)a2 logKey:(id)a3 error:(id *)a4;
+ (id)_DAAPActionsForURLBagActions:(id)a0;
+ (BOOL)verifyTask:(id)a0 data:(id)a1 type:(long long)a2 bag:(id)a3 error:(id *)a4;
+ (BOOL)_matchSignSapURL:(id)a0 bagDictionary:(id)a1 error:(id *)a2;
+ (id)signatureUsingRequest:(id)a0 type:(long long)a1 bagContract:(id)a2 error:(id *)a3;
+ (BOOL)shouldReprimeConnectionWithResult:(id)a0;
+ (id)_signedActionDataFromRequest:(id)a0 policy:(id)a1;
+ (BOOL)primeTheConnectionWithContract:(id)a0 error:(id *)a1;
+ (BOOL)verifyTask:(id)a0 data:(id)a1 type:(long long)a2 bagContract:(id)a3 logKey:(id)a4 error:(id *)a5;


@end
