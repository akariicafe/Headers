@class HMUser, HMFUnfairLock;

@interface HMAccessControl : NSObject <NSSecureCoding> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long cachedHash;
@property (weak) HMUser *user;

- (id)initWithUser:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
