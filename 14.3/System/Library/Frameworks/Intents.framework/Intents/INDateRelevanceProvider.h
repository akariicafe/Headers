@class NSDate;

@interface INDateRelevanceProvider : INRelevanceProvider

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
