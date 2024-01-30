@class HMDAccountHandle;

@interface _HMDAccountHandleIdentifer : _HMDAccountIdentifier

@property (readonly, copy) HMDAccountHandle *accountHandle;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccountHandle:(id)a0;

@end
