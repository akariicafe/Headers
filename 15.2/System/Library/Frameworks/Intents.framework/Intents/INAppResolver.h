@class INExecutionFrameworkMapper, NSMutableDictionary, INAppResolverOptions, INSystemAppMapper, INExecutionCounterpartMapper;

@interface INAppResolver : NSObject

@property (readonly, nonatomic) INExecutionCounterpartMapper *_counterpartMapper;
@property (readonly, nonatomic) INExecutionFrameworkMapper *_frameworkMapper;
@property (readonly, nonatomic) INSystemAppMapper *_systemAppMapper;
@property (readonly, nonatomic) NSMutableDictionary *cachedResults;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;
@property (readonly, nonatomic) INAppResolverOptions *globalOptions;
@property (readonly, nonatomic) NSMutableDictionary *intentClassNameToResolverOptions;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } resolverOptionsLock;

+ (void)initialize;
+ (id)sharedResolver;

- (id)counterpartIdentifiersForLocalIdentifier:(id)a0;
- (id)localIdentifiersForCounterpartIdentifier:(id)a0;
- (id)resolvedAppMatchingDescriptor:(id)a0;
- (id)cachedResultForKey:(id)a0;
- (id)_resolvedAppMatchingDescriptor:(id)a0;
- (id)resolvedIntentMatchingDescriptor:(id)a0;
- (id)_resolvedIntentMatchingDescriptor:(id)a0;
- (id)resolvedUserActivityMatchingDescriptor:(id)a0;
- (id)_resolvedUserActivityMatchingDescriptor:(id)a0;
- (void)cacheResult:(id)a0 forDescriptor:(id)a1;
- (id)resolveDescriptorBySwappingIdentifiersWithExtensionIfApplicable:(id)a0;
- (BOOL)cacheHasResultForDescriptor:(id)a0;
- (id)resolveDescriptorByLinkingFileProvidersToFilesApp:(id)a0;
- (id)optionsForCurrentContextWithIntentClassName:(id)a0;
- (void)setOptions:(id)a0 forIntentClassName:(id)a1;
- (id)_optionsForIntentClassName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateCache;
- (void)installedApplicationsDidChange:(id)a0;
- (void)dealloc;
- (void)setOptions:(id)a0;

@end
