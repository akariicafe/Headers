@class NSString;
@protocol PFParallaxLayoutConfiguration;

@interface PISegmentationContextInfo : NSObject

@property (copy, nonatomic) NSString *systemName;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *systemBuildVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic) long long sourceMode;
@property (nonatomic) BOOL segmentationDisabled;
@property (nonatomic) long long infillAlgorithm;
@property (retain, nonatomic) id<PFParallaxLayoutConfiguration> layoutConfiguration;

+ (id)currentContextInfo;

- (void).cxx_destruct;

@end
