@class NSData;

@interface CRKFetchStagedAdHocIdentityCertificateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *stagedAdHocIdentityCertificate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
