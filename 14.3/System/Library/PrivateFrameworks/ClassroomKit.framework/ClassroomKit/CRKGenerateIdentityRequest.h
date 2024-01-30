@class NSString;

@interface CRKGenerateIdentityRequest : CATTaskRequest

@property (copy, nonatomic) NSString *commonName;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
