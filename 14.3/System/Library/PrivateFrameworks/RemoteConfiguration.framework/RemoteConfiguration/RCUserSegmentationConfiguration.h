@class NSString;

@interface RCUserSegmentationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long foregroundRefreshRate;
@property (readonly, nonatomic) unsigned long long backgroundRefreshRate;
@property (readonly, nonatomic) unsigned long long modThreshold;
@property (readonly, nonatomic) unsigned long long modMax;
@property (readonly, copy, nonatomic) NSString *endpointURLString;

+ (id)defaultConfiguration;
+ (id)userSegmentationConfigurationWithConfigDict:(id)a0 environment:(unsigned long long)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithForegroundRefreshRate:(unsigned long long)a0 backgroundRefreshRate:(unsigned long long)a1 modThreshold:(unsigned long long)a2 modMax:(unsigned long long)a3 endpointURLString:(id)a4;

@end
