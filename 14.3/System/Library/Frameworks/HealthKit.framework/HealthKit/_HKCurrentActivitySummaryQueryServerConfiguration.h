@class NSDictionary;

@interface _HKCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDictionary *collectionIntervals;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
