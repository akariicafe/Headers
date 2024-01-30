@class NSMutableDictionary;

@interface CKComponentDataSourceAttachController : NSObject {
    NSMutableDictionary *_scopeIdentifierToAttachedViewMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)attachComponentLayout:(struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; })a0 withScopeIdentifier:(int)a1 withBoundsAnimation:(struct CKComponentBoundsAnimation { double x0; double x1; unsigned long long x2; unsigned long long x3; double x4; double x5; })a2 toView:(id)a3;
- (void)detachComponentLayoutWithScopeIdentifier:(int)a0;
- (id)attachStateForScopeIdentifier:(int)a0;
- (void)_detachComponentLayoutFromView:(id)a0;

@end
