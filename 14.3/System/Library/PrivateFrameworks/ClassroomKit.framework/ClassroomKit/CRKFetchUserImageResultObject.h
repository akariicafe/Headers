@class NSData;

@interface CRKFetchUserImageResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *userImageData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
