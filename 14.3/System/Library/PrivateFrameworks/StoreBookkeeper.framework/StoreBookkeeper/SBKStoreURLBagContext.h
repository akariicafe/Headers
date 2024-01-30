@class SSURLBag, NSString, NSURL;

@interface SBKStoreURLBagContext : NSObject <NSMutableCopying, NSCopying>

@property (retain) SSURLBag *bag;
@property (copy) NSString *domain;
@property (retain) NSURL *syncRequestURL;
@property (retain) NSURL *pushKeyValueRequestURL;
@property (retain) NSURL *pullKeyValueRequestURL;
@property (retain) NSURL *pushAllKeyValueRequestURL;
@property (retain) NSURL *pullAllKeyValueRequestURL;
@property BOOL domainDisabled;
@property double pollingIntervalInSeconds;

+ (void)loadBagContextFromURLBag:(id)a0 domain:(id)a1 completionBlock:(id /* block */)a2;
+ (void)_findFirstValueInBag:(id)a0 keyEnumerator:(id)a1 valueTransformer:(id /* block */)a2 defaultValue:(id)a3 completionBlock:(id /* block */)a4;
+ (void)enumerateRequestURLBagKeysWithBlock:(id /* block */)a0;
+ (id)UPPDomainIdentifier;
+ (id)ExtrasDomainIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithBag:(id)a0 domain:(id)a1;
- (id)_initWithDomain:(id)a0 syncRequestURL:(id)a1 domainDisabled:(BOOL)a2;

@end
