@class NSPredicate, NSArray;

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL disallowsEncodedFetch;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long decoderBatchSize;
@property (readonly) unsigned long long serialNumber;
@property (readonly) unsigned long long signpostId;
@property (nonatomic) BOOL rankSort;
@property (nonatomic) BOOL onlyMainStore;
@property (nonatomic) BOOL allowsBatching;
@property (nonatomic) BOOL shouldFailIfAccountNotYetSynced;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *keysToFetch;
@property (nonatomic) BOOL mutableObjects;
@property (nonatomic) BOOL unifyResults;
@property (nonatomic) long long sortOrder;

+ (unsigned long long)makeSignpostId;
+ (unsigned long long)makeSerialNumber;

- (id)effectiveKeysToFetch;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptVisitor:(id)a0;
- (id)effectivePredicate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)requiresMeContactAuthorization;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKeysToFetch:(id)a0;

@end
