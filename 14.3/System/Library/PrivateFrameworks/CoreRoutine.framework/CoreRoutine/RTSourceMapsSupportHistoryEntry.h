@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport

@property (readonly, nonatomic) NSDate *usageDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUsageDate:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
