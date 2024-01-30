@interface CLSQuantityReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double quantity;

- (long long)compare:(id)a0;
- (void)add:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)scalarMultiply:(double)a0;
- (id)convertToItemCompatibleWithItem:(id)a0;

@end
