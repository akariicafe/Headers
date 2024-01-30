@class NSMutableArray;

@interface XRFrameRing : NSObject {
    struct shared_ptr<xray::scheduler::Ring> { struct Ring *__ptr_; struct __shared_weak_count *__cntrl_; } _ringImpl;
    unsigned long long _ringID;
    NSMutableArray *_managersBySlot;
}

- (struct shared_ptr<xray::scheduler::Ring> { struct Ring *x0; struct __shared_weak_count *x1; })_parent;
- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (void)_moveToCommutator:(void *)a0;
- (void)_removeFromCommutator:(void *)a0;
- (void)assignActivityManager:(id)a0 frame:(id)a1;
- (void)assignActivityManager:(id)a0 slot:(unsigned char)a1;
- (id)initWithMinorFrameCount:(unsigned char)a0;

@end
