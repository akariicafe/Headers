@interface FxHost : NSObject <FxStreamProviding, FxHostEnvironment> {
    struct FxHostPriv { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; } *_priv;
}

+ (id)host;
+ (id)fxMetaPlugsFolderURLs;
+ (id)_createPathArrayFromURLArray:(id)a0;
+ (id)fxPlugsFolderURLs;
+ (id)_scanFxMetaPlugWrappersWithPlugInManager:(id)a0;
+ (id)internalPlugInsFolderURL;
+ (id)plugInsFolderURLs;

- (id)uniqueID;
- (int)majorVersion;
- (id)hostName;
- (int)minorVersion;
- (id)init;
- (void)dealloc;
- (unsigned int)timeScaleForStream:(id)a0;
- (double)startTimeForStream:(id)a0;
- (double)durationForStream:(id)a0;
- (double)frameDurationForStream:(id)a0;
- (BOOL)isStreamPremultiplied:(id)a0;
- (double)pixelAspectForStream:(id)a0;
- (BOOL)isContextTypeSupported:(int)a0 bySample:(id)a1;
- (unsigned long long)fieldOrderForSample:(id)a0;
- (BOOL)isSamplePredetermined:(id)a0;
- (id)requiredSamplesForSample:(id)a0;
- (id)evaluateSample:(id)a0 withOptions:(id)a1;
- (id)domainOfDefinitionForSample:(id)a0;
- (id)_fxMetaPlugWrapperForPlugInTypeUUID:(id)a0;
- (id)_createDefaultSearchableURLsDict;
- (id)_createDefaultSupportBuiltInsDict;
- (id)searchableURLsForPlugInTypeUUID:(id)a0;
- (void)invalidateFxPlugDescriptorArray;
- (BOOL)allowBuiltInEffectsForPlugInTypeUUID:(id)a0;
- (void)scanFxPlugsIfNecessary;
- (id)_findGroupInList:(id)a0 withIdenticalDescriptor:(id)a1;
- (id)_fxPlugGroupListForOptionalFlavor:(id)a0;
- (unsigned int)globalTimeScale;
- (double)globalFrameDuration;
- (BOOL)supportsParameterClass:(Class)a0;
- (id)defaultSearchableURLsForPlugInTypeUUID:(id)a0;
- (void)setSearchableURLs:(id)a0 forPlugInTypeUUID:(id)a1;
- (id)defaultSupportedPlugInTypeUUIDs;
- (id)supportedPlugInTypeUUIDs;
- (void)setSupportedPlugInTypeUUIDs:(id)a0;
- (void)setAllowBuiltInEffects:(BOOL)a0 forPlugInTypeUUID:(id)a1;
- (id)fxPlugGroupList;
- (id)fxPlugGroupListForFlavor:(id)a0;
- (id)fxPlugDescriptorWithUUID:(id)a0;

@end
