@class HMDAccountHandle;

@interface _HMDAccountHandleIdentifer : _HMDAccountIdentifier

@property (readonly, copy) HMDAccountHandle *accountHandle;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)kind;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountHandle:(id)a0;

@end
