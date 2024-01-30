@class NSString;

@interface CRKFetchChaptersRequest : CATTaskRequest

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *identifierType;
@property (copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
