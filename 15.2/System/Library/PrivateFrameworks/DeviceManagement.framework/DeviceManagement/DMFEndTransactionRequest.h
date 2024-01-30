@class NSUUID;

@interface DMFEndTransactionRequest : DMFTaskRequest

@property (copy, nonatomic) NSUUID *UUID;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
