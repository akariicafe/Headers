@interface SCNCommonProfileProgramGenerator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _programMutex;
    struct __CFDictionary { } *_shaders;
    struct __CFDictionary { } *_trackedResourcesToHashcode;
}

@property (readonly, nonatomic) int profile;

+ (id)deferredGeneratorWithProfile:(int)a0;
+ (id)generatorWithProfile:(int)a0 allowingHotReload:(BOOL)a1;

- (void)dealloc;
- (id)init;
- (void)emptyShaderCache;
- (struct __C3DFXProgram { } *)programWithHashCode:(struct __C3DProgramHashCode { } *)a0 engineContext:(struct __C3DEngineContext { } *)a1 trackedResource:(id)a2 introspectionDataPtr:(void *)a3;
- (void)releaseProgramForResource:(id)a0;

@end
