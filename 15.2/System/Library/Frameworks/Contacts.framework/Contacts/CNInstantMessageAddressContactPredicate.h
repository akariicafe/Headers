@class CNInstantMessageAddress;

@interface CNInstantMessageAddressContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) CNInstantMessageAddress *imAddress;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInstantMessageAddress:(id)a0;

@end
