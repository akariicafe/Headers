@class NSSet, CKComponent, NSDictionary;

@interface CKComponentDataSourceAttachState : NSObject {
    struct CKComponentLayout { CKComponent *component; struct CGSize { double width; double height; } size; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } children; NSDictionary *extra; } _layout;
}

@property (readonly, nonatomic) NSSet *mountedComponents;
@property (readonly, nonatomic) int scopeIdentifier;

- (void).cxx_destruct;
- (const void *)layout;
- (id).cxx_construct;
- (id)initWithScopeIdentifier:(int)a0 mountedComponents:(id)a1 layout:(const void *)a2;

@end
