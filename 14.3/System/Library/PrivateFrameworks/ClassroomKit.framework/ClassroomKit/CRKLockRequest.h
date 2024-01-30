@class NSString;

@interface CRKLockRequest : CATTaskRequest

@property (copy, nonatomic) NSString *lockedByLabel;
@property (copy, nonatomic) NSString *passcode;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
