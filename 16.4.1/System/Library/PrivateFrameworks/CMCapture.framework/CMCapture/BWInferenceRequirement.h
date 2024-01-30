@class BWInferenceConfiguration;
@protocol BWInferenceProvider;

@interface BWInferenceRequirement : NSObject

@property (readonly, nonatomic) id<BWInferenceProvider> provider;
@property (readonly, nonatomic) BWInferenceConfiguration *configuration;

- (id)initWithProvider:(id)a0 configuration:(id)a1;
- (void)dealloc;

@end
