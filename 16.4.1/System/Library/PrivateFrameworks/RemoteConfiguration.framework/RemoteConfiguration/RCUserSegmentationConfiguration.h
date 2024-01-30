@class NSString;

@interface RCUserSegmentationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long foregroundRefreshRate;
@property (readonly, nonatomic) unsigned long long backgroundRefreshRate;
@property (readonly, nonatomic) unsigned long long modThreshold;
@property (readonly, nonatomic) unsigned long long modMax;
@property (readonly, copy, nonatomic) NSString *endpointURLString;
@property (readonly, copy, nonatomic) NSString *widgetEndpointURLString;
@property (readonly, copy, nonatomic) NSString *todayEndpointURLString;

+ (id)defaultConfiguration;
+ (id)userSegmentationConfigurationWithConfigDict:(id)a0 environment:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithForegroundRefreshRate:(unsigned long long)a0 backgroundRefreshRate:(unsigned long long)a1 modThreshold:(unsigned long long)a2 modMax:(unsigned long long)a3 endpointURLString:(id)a4 widgetEndpointURLString:(id)a5 todayEndpointURLString:(id)a6;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
