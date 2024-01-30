@class NSSet, NSString, NSArray;

@interface ASCLockupBatchRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *ids;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSArray *requests;

+ (id)lockupBatchRequestsFromRequests:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)lockupBatchRequestWithIDs:(id)a0;
- (id)initWithIDs:(id)a0 kind:(id)a1 context:(id)a2;

@end
