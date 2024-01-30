@class NSString, MXSignpostIntervalData;

@interface MXSignpostMetric : MXMetric

@property (readonly) NSString *signpostName;
@property (readonly) NSString *signpostCategory;
@property (readonly) MXSignpostIntervalData *signpostIntervalData;
@property (readonly) unsigned long long totalCount;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSignpostName:(id)a0 withSignpostCategory:(id)a1 withTotalCount:(unsigned long long)a2 withSignpostIntervalData:(id)a3;

@end
