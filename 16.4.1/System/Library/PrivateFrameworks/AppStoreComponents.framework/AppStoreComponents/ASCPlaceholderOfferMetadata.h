@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isPlaceholder;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
