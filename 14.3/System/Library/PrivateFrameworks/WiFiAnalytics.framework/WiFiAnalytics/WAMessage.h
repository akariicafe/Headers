@class NSString, NSMutableDictionary;

@interface WAMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *metricName;
@property (copy, nonatomic) NSMutableDictionary *metricInfo;
@property (nonatomic) long long options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)addFieldForKey:(id)a0 value:(id)a1 options:(long long)a2;
- (id)initWithMetricName:(id)a0 options:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
