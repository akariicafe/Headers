@class NSString, REMFetchResultToken;

@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMFetchResultToken *fetchResultTokenToDiffAgainst;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFetchResultTokenToDiffAgainst:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
