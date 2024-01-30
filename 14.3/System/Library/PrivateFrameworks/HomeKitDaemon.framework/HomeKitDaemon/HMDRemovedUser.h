@class HMDUser, NSDate;

@interface HMDRemovedUser : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (getter=isRemovalInProgress) BOOL removalInProgress;

+ (id)removedUserWithUser:(id)a0;

- (BOOL)isExpired;
- (void).cxx_destruct;
- (BOOL)isEqualToUser:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToUserID:(id)a0;
- (id)initWithUser:(id)a0 expiration:(id)a1;

@end
