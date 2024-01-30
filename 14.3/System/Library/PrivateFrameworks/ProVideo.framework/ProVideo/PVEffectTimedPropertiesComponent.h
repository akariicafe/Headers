@class PVEffect, NSMutableSet;

@interface PVEffectTimedPropertiesComponent : NSObject <PVEffectComponent, PVEffectTimedProperties> {
    NSMutableSet *_delegateWrappers;
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> > { struct __compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock> > { struct PVGCDLock *__value_; } __ptr_; } _delegateCollectionLock;
}

@property (weak, nonatomic) PVEffect *effect;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithEffect:(id)a0;
- (void)removeAllTimedPropertiesDelegates;
- (void)addTimedPropertiesDelegate:(id)a0 userContext:(id)a1;
- (BOOL)hasTimedPropertiesDelegates;
- (void)didLoad:(BOOL)a0;
- (void)didUnload;
- (void)updateProperties:(id)a0 allProperties:(id)a1;
- (BOOL)applyTimedPropertiesForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)removeTimedPropertiesDelegate:(id)a0;
- (id)timedPropertiesDelegates;
- (BOOL)hasTimedPropertiesDelegate:(id)a0;
- (id)userContextForTimedPropertiesDelegate:(id)a0;
- (BOOL)addTimedPropertiesToDict:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)addTimedPropertiesDelegateWrapper:(id)a0;
- (id)delegateWrappers;

@end
