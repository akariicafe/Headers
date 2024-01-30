@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (BOOL)isPlaceholder;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
