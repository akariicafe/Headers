@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier

@property (readonly, copy) NSString *identifierString;

+ (BOOL)supportsSecureCoding;
+ (id)namespace;

- (BOOL)isAuthenticated;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)senderCorrelationIdentifier;
- (id)initWithIdentifier:(id)a0;
- (id)kind;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifierString:(id)a0;

@end
