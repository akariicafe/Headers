@class NSPredicate, NSArray;

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL disallowsEncodedFetch;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long decoderBatchSize;
@property (readonly) unsigned long long serialNumber;
@property (nonatomic) BOOL rankSort;
@property (nonatomic) BOOL onlyMainStore;
@property (nonatomic) BOOL allowsBatching;
@property (nonatomic) BOOL shouldFailIfAccountNotYetSynced;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *keysToFetch;
@property (nonatomic) BOOL mutableObjects;
@property (nonatomic) BOOL unifyResults;
@property (nonatomic) long long sortOrder;

+ (unsigned long long)makeSerialNumber;

- (void)encodeWithCoder:(id)a0;
- (id)effectivePredicate;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeysToFetch:(id)a0;
- (id)effectiveKeysToFetch;
- (void)acceptVisitor:(id)a0;
- (BOOL)requiresMeContactAuthorization;

@end
