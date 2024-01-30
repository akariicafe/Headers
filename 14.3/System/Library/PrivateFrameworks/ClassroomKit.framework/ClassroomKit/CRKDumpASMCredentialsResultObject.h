@class NSDictionary;

@interface CRKDumpASMCredentialsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *credentials;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
