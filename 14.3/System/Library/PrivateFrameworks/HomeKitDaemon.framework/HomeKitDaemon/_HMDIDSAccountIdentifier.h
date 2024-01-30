@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier

@property (readonly, copy) NSString *identifierString;

+ (BOOL)supportsSecureCoding;
+ (id)namespace;

- (BOOL)isAuthenticated;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)senderCorrelationIdentifier;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifierString:(id)a0;

@end
