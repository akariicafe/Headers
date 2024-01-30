@class NSArray, NSDateComponents, NSDate;

@interface HKValueHistogramCollectionQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *anchorDate;
@property (copy, nonatomic) NSDateComponents *intervalComponents;
@property (copy, nonatomic) NSArray *quantityRanges;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
