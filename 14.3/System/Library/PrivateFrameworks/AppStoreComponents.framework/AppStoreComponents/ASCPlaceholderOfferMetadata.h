@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (id)init;
- (BOOL)isPlaceholder;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
