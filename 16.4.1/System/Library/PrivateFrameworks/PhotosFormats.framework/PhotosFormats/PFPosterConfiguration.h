@class NSString, NSArray, PFPosterShuffleConfiguration, PFPosterEditConfiguration;
@protocol PFParallaxLayoutConfiguration;

@interface PFPosterConfiguration : NSObject <NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long posterType;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long configurationType;
@property (nonatomic) long long options;
@property (retain, nonatomic) NSArray *media;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) PFPosterEditConfiguration *editConfiguration;
@property (retain, nonatomic) PFPosterShuffleConfiguration *shuffleConfiguration;
@property (retain, nonatomic) id<PFParallaxLayoutConfiguration> layoutConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadFromURL:(id)a0 error:(id *)a1;

- (id)analyticsPayload;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithConfigurationType:(long long)a0;
- (id)mediaAnalyticsPayload;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;

@end
