@class __end_, NSMutableArray, __end_cap_;

@interface MDLScene : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } *_sceneMutex;
    struct vector<ModelIO::RTRenderable *, std::allocator<ModelIO::RTRenderable *>> { struct RTRenderable **__begin_; struct RTRenderable **__end_; struct __compressed_pair<ModelIO::RTRenderable **, std::allocator<ModelIO::RTRenderable *>> { struct RTRenderable **__value_; } __end_cap_; } _sceneObjects;
    struct vector<MDLLight *, std::allocator<MDLLight *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MDLLight *__strong *, std::allocator<MDLLight *>> { id *__value_; } x1; } _sceneLights;
    int _signature;
}

@property (readonly, retain, nonatomic) NSMutableArray *objects;

- (void)addObject:(id)a0;
- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (int)acquireLockGuard;
- (BOOL)castRayFrom:(id)a0 withDirection:(SEL)a1 usingCamera:(struct RTCamera { void /* function */ **x0; unsigned long long x1; unsigned long long x2; float x3; float x4; int x5; float *x6; id **x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; struct RTRaySegment *x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; } *)a2 result:(struct RTIntersectionResult { float x0; struct RTGeometry *x1; id x2; } *)a3;
- (void /* unknown type, empty encoding */)hitTestRayFrom:(id)a0 withDirection:(SEL)a1 usingCamera:(id)a2;
- (id)raytraceSceneWithCamera:(SEL)a0 reflection:(const struct RTCamera { void /* function */ **x0; unsigned long long x1; unsigned long long x2; float x3; float x4; int x5; float *x6; id **x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; struct RTRaySegment *x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; } *)a1 irradiance:(id)a2 size:(id)a3;
- (void)releaseLockGuard:(int)a0;

@end
