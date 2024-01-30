@class NSDictionary, INExecutionCounterpartMapper;

@interface INExecutionInfoResolver : NSObject

@property (readonly, copy, nonatomic) NSDictionary *_counterpartMapping;
@property (readonly, nonatomic) INExecutionCounterpartMapper *_counterpartMapper;

+ (void)initialize;
+ (id)defaultResolver;

- (void).cxx_destruct;
- (id)_resolveExecutionInfoBySwappingIdentifiers:(id)a0;
- (id)localIdentifiersForCounterpartIdentifier:(id)a0;
- (id)_resolveUserActivityExecutionInfoByLinkingFileProvidersToFilesApp:(id)a0;
- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)a0;
- (id)counterpartIdentifiersForLocalIdentifier:(id)a0;
- (id)_resolveIntentExecutionInfoBySwappingIdentifiers:(id)a0;
- (id)resolveIntentExecutionInfo:(id)a0;
- (id)_resolveUserActivityExecutionInfoUsingCounterparts:(id)a0;
- (id)_resolveIntentExecutionInfoUsingCounterparts:(id)a0;
- (id)_resolveExecutionInfoByLinkingExtensionToApp:(id)a0;
- (id)resolveUserActivityExecutionInfo:(id)a0;
- (id)_resolveUserActivityExecutionInfoBySwappingIdentifiers:(id)a0;
- (id)_resolveExecutionInfo:(id)a0;
- (id)_resolveIntentExecutionInfoByLinkingExtensionToApp:(id)a0;

@end
