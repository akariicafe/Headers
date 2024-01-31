@class NSNumber, NSPredicate, NSArray;

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL disallowsEncodedFetch;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long decoderBatchSize;
@property (readonly) unsigned long long serialNumber;
@property (readonly) unsigned long long signpostId;
@property (retain, nonatomic) NSNumber *keyboardState;
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
+ (unsigned long long)makeSignpostId;

- (id)init;
- (id)effectiveKeysToFetch;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeysToFetch:(id)a0;
- (id)description;
- (id)effectivePredicate;
- (void).cxx_destruct;
- (BOOL)requiresMeContactAuthorization;
- (void)acceptVisitor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
