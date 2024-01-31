@interface CLSScoreReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double value;
@property (nonatomic) double maxValue;
@property (readonly, nonatomic) double normalized;

- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void)add:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)scalarMultiply:(double)a0;
- (id)convertToItemCompatibleWithItem:(id)a0;

@end
