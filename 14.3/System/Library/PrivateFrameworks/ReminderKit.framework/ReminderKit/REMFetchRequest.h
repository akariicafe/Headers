@class _REMFetchExecutor, REMFetchResultToken;

@interface REMFetchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _REMFetchExecutor *fetchExecutor;
@property (retain, nonatomic) REMFetchResultToken *fetchResultToken;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long fetchLimit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)copyWithType:(long long)a0;
- (id)initWithFetchExecutor:(id)a0;
- (id)storagesAndParentFetchRequest;
- (id)storagesOnlyFetchRequest;
- (id)countOnlyFetchRequest;
- (id)objectIDsOnlyFetchRequest;
- (id)metadataFetchRequest;
- (id)fetchRequestWithFetchResultToken:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
