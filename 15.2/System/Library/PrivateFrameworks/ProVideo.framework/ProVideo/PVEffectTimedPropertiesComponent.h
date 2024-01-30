@class NSMutableSet;

@interface PVEffectTimedPropertiesComponent : PVEffectComponent <PVEffectTimedProperties> {
    NSMutableSet *_delegateWrappers;
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { struct PVGCDLock *__value_; } __ptr_; } _delegateCollectionLock;
}

- (void).cxx_destruct;
- (id)initWithEffect:(id)a0;
- (id).cxx_construct;
- (void)removeAllTimedPropertiesDelegates;
- (void)addTimedPropertiesDelegate:(id)a0 userContext:(id)a1;
- (BOOL)hasTimedPropertiesDelegates;
- (void)effectDidLoad:(id)a0 isReady:(BOOL)a1;
- (void)effectDidUnload:(id)a0;
- (BOOL)applyTimedPropertiesForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)removeTimedPropertiesDelegate:(id)a0;
- (id)timedPropertiesDelegates;
- (BOOL)hasTimedPropertiesDelegate:(id)a0;
- (id)userContextForTimedPropertiesDelegate:(id)a0;
- (BOOL)addTimedPropertiesToDict:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)addTimedPropertiesDelegateWrapper:(id)a0;
- (id)delegateWrappers;

@end
