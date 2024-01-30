@class TSDTileStorage, NSString, TSKAccessController, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface TSDTileProvider : NSObject <CALayerDelegate> {
    id<NSObject> mTarget;
    TSDTileStorage *mTileStorage;
    TSKAccessController *mAccessController;
    NSObject<OS_dispatch_queue> *mQueue;
}

@property struct { struct { unsigned long long x; unsigned long long y; } topLeft; struct { unsigned long long x; unsigned long long y; } bottomRight; } visibleTileRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)flush;
- (void)removeStoredImages;
- (id)contentsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentsScale:(double)a1 forTile:(id)a2 atLocation:(struct { unsigned long long x0; unsigned long long x1; })a3 takingReadLock:(BOOL)a4;
- (id)p_bucketKey;
- (BOOL)isTargetOpaque;
- (void)drawTargetInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (id)initWithTarget:(id)a0 queue:(id)a1 storage:(id)a2 accessController:(id)a3;
- (void)provideContentsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentsScale:(double)a1 forTile:(id)a2 atLocation:(struct { unsigned long long x0; unsigned long long x1; })a3 inGroup:(id)a4 limitedBySemaphore:(id)a5 takingReadLock:(BOOL)a6 startBlock:(id /* block */)a7 completionBlock:(id /* block */)a8;
- (BOOL)canTargetDrawInParallel;

@end
