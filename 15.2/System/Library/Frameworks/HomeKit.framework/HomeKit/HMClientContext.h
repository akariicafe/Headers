@class NSString;

@interface HMClientContext : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSString *metricIdentifier;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetricIdentifier:(id)a0;

@end
