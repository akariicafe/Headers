@class NSMutableArray, NSString, ICURLBag, NSError, NSDate, ICStoreRequestContext, AMSProcessInfo;

@interface ICAMSBagAdapter : NSObject <AMSBagProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_pendingBagValuePromises;
    ICURLBag *_urlBag;
    NSError *_urlBagLoadingError;
}

@property (readonly, nonatomic) ICStoreRequestContext *requestContext;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_valueFromBagDictionary:(id)a0 forKeyPath:(id)a1 valueType:(unsigned long long)a2;
+ (BOOL)_value:(id)a0 matchesExpectedType:(unsigned long long)a1;
+ (id)_valueForBagKey:(id)a0 valueType:(unsigned long long)a1 fromURLBag:(id)a2 urlBagLoadingError:(id)a3 valueRetrievingError:(id *)a4;

- (void).cxx_destruct;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0;
- (id)stringForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)_bagValueForKey:(id)a0 valueType:(unsigned long long)a1;
- (void)_didFinishLoadingBag:(id)a0 error:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)doubleForKey:(id)a0;

@end
