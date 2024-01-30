@class NSData;

@interface CRKGenerateIdentityResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSData *privateKeyData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
