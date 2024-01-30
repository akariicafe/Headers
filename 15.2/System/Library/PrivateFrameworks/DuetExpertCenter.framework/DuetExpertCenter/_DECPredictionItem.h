@class _DECItem;

@interface _DECPredictionItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double confidence;
@property (readonly, nonatomic) _DECItem *item;

+ (id)predictionItemWithItem:(id)a0 confidence:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithItem:(id)a0 confidence:(double)a1;

@end
