@interface HKMetadataValueRange : NSObject <NSCopying>

@property (readonly, copy, nonatomic) id minValue;
@property (readonly, copy, nonatomic) id maxValue;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1;

@end
