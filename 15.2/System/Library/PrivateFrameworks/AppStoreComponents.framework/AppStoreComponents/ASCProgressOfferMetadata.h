@interface ASCProgressOfferMetadata : ASCOfferMetadata

@property (readonly, nonatomic) double percent;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initIndeterminate;
- (id)initWithPercent:(double)a0;
- (BOOL)isProgress;

@end
