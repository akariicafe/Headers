@class NSString, NSMutableDictionary, SSBagProfileConfig, NSDate;

@interface SSBag : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *cache;

@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) SSBagProfileConfig *profileConfig;

+ (unsigned long long)_AMSBagValueTypeFromSSBagValueType:(unsigned long long)a0;
+ (id)bagWithProfileConfig:(id)a0;
+ (void)removeAllDebugBackingDictionaries;
+ (void)setDebugBackingDictionary:(id)a0 forProfileConfig:(id)a1;

- (void).cxx_destruct;
- (id)stringForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)arrayForKey:(id)a0 error:(id *)a1;
- (id)boolForKey:(id)a0 error:(id *)a1;
- (id)doubleForKey:(id)a0 error:(id *)a1;
- (id)integerForKey:(id)a0 error:(id *)a1;
- (id)URLForKey:(id)a0 error:(id *)a1;
- (id)dictionaryForKey:(id)a0 error:(id *)a1;
- (id)_AMSBag;
- (id)description;
- (void)_bagChanged:(id)a0;
- (id)_initWithProfile:(id)a0 profileVersion:(id)a1;
- (void)arrayForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)boolForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)dictionaryForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)doubleForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)integerForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)stringForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)URLForKey:(id)a0 withCompletion:(id /* block */)a1;
- (id)arrayPromiseForKey:(id)a0;
- (id)boolPromiseForKey:(id)a0;
- (id)dictionaryPromiseForKey:(id)a0;
- (id)doublePromiseForKey:(id)a0;
- (id)integerPromiseForKey:(id)a0;
- (id)stringPromiseForKey:(id)a0;
- (id)URLPromiseForKey:(id)a0;
- (BOOL)URLIsTrusted:(id)a0;
- (BOOL)canHandleTrustedDomains;
- (id)resetCaches;

@end
