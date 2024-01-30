@class NSDictionary, INExecutionCounterpartMapper, INExecutionFrameworkMapper;

@interface INExecutionInfoResolver : NSObject

@property (readonly, copy, nonatomic) NSDictionary *_counterpartMapping;
@property (readonly, nonatomic) INExecutionCounterpartMapper *_counterpartMapper;
@property (readonly, nonatomic) INExecutionFrameworkMapper *_frameworkMapper;

+ (void)initialize;
+ (id)defaultResolver;

- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)localIdentifiersForCounterpartIdentifier:(id)a0;
- (id)counterpartIdentifiersForLocalIdentifier:(id)a0;
- (id)_resolveExecutionInfo:(id)a0;
- (id)_resolveExecutionInfoByLinkingExtensionToApp:(id)a0;
- (id)_resolveExecutionInfoBySwappingIdentifiers:(id)a0;
- (id)_resolveIntentExecutionInfoByLinkingExtensionToApp:(id)a0;
- (id)_resolveIntentExecutionInfoBySwappingIdentifiers:(id)a0;
- (id)_resolveIntentExecutionInfoUsingCounterparts:(id)a0;
- (id)_resolveUserActivityExecutionInfoByLinkingFileProvidersToFilesApp:(id)a0;
- (id)_resolveUserActivityExecutionInfoBySwappingIdentifiers:(id)a0;
- (id)_resolveUserActivityExecutionInfoUsingCounterparts:(id)a0;
- (id)resolveIntentExecutionInfo:(id)a0;
- (id)resolveUserActivityExecutionInfo:(id)a0;

@end
