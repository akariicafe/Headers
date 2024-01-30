@class SSURLBag, NSString, NSURL;

@interface SBKStoreURLBagContext : NSObject <NSMutableCopying, NSCopying>

@property (retain, nonatomic) SSURLBag *bag;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSURL *syncRequestURL;
@property (retain, nonatomic) NSURL *pushKeyValueRequestURL;
@property (retain, nonatomic) NSURL *pullKeyValueRequestURL;
@property (retain, nonatomic) NSURL *pushAllKeyValueRequestURL;
@property (retain, nonatomic) NSURL *pullAllKeyValueRequestURL;
@property (nonatomic) BOOL domainDisabled;
@property (nonatomic) double pollingIntervalInSeconds;

+ (id)ExtrasDomainIdentifier;
+ (id)UPPDomainIdentifier;
+ (void)_findFirstValueInBag:(id)a0 keyEnumerator:(id)a1 valueTransformer:(id /* block */)a2 defaultValue:(id)a3 completionBlock:(id /* block */)a4;
+ (void)enumerateRequestURLBagKeysWithBlock:(id /* block */)a0;
+ (void)loadBagContextFromURLBag:(id)a0 domain:(id)a1 completionBlock:(id /* block */)a2;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithDomain:(id)a0 syncRequestURL:(id)a1 domainDisabled:(BOOL)a2;
- (id)initWithBag:(id)a0 domain:(id)a1;

@end
