@class NSString;

@interface CRKStartAppLockRequest : CATTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
