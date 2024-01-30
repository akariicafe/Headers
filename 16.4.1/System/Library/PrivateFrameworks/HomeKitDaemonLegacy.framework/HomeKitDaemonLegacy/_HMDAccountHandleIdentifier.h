@class HMDAccountHandle;

@interface _HMDAccountHandleIdentifier : _HMDAccountIdentifier

@property (readonly, copy) HMDAccountHandle *accountHandle;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)identifier;
- (id)kind;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountHandle:(id)a0;

@end
