@interface ASCEmptyOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (BOOL)isEmpty;
- (id)init;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
