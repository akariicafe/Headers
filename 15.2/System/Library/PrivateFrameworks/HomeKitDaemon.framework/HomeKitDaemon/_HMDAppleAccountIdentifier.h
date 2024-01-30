@class NSString;

@interface _HMDAppleAccountIdentifier : _HMDAccountIdentifier {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_accountMergeID;
}

@property (readonly, copy) NSString *identifierString;

+ (BOOL)supportsSecureCoding;
+ (id)namespace;

- (BOOL)isAuthenticated;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)kind;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)senderCorrelationIdentifier;
- (void)updateAppleAccountSenderCorrelationIdentifier:(id)a0;
- (id)initWithIdentifierString:(id)a0;

@end
