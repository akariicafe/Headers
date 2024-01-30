@class NSString;
@protocol SXRenderingConfigurationProvider;

@interface SXConfiguredConditionValidator : NSObject <SXConditionValidating>

@property (readonly, nonatomic) id<SXRenderingConfigurationProvider> renderingConfigurationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRenderingConfigurationProvider:(id)a0;
- (BOOL)validateCondition:(id)a0 context:(id)a1;

@end
