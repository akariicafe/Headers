@class NSString;

@interface CRKSetUserImageResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *imageIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
