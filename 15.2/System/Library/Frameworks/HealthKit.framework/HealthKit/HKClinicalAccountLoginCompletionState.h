@class NSNumber, HKClinicalAccount;

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKClinicalAccount *account;
@property (copy, nonatomic) NSNumber *alternateCredentialPersistentID;
@property (readonly, nonatomic) BOOL wasRelogin;

- (id)initWithAccount:(id)a0 wasRelogin:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
