@class NSNumber;

@interface SFUnlockState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *unlockEnabled;
@property (readonly) NSNumber *remotePasscodeEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUnlockEnabled:(id)a0 remotePasscodeEnabled:(id)a1;

@end
