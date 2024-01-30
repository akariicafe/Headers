@class BWInferenceConfiguration;
@protocol BWInferenceProvider;

@interface BWInferenceRequirement : NSObject

@property (readonly, nonatomic) id<BWInferenceProvider> provider;
@property (readonly, nonatomic) BWInferenceConfiguration *configuration;

- (void)dealloc;
- (id)initWithProvider:(id)a0 configuration:(id)a1;

@end
