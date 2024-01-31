@interface CNMeContactsPredicate : CNPredicate

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)contactsFromDonationStore:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
