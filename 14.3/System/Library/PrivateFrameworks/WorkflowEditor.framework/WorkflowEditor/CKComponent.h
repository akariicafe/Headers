@class CKComponentScopeHandle, UIView;
@protocol NSObject;

@interface CKComponent : NSObject {
    CKComponentScopeHandle *_scopeHandle;
    struct CKComponentViewConfiguration { struct shared_ptr<const CKComponentViewConfiguration::Repr> { struct Repr *__ptr_; struct __shared_weak_count *__cntrl_; } rep; } _viewConfiguration;
    struct unique_ptr<CKComponentMountInfo, std::__1::default_delete<CKComponentMountInfo> > { struct __compressed_pair<CKComponentMountInfo *, std::__1::default_delete<CKComponentMountInfo> > { struct CKComponentMountInfo *__value_; } __ptr_; } _mountInfo;
}

@property (weak, nonatomic) UIView *rootComponentMountedView;
@property (readonly, nonatomic) id<NSObject> scopeFrameToken;
@property (readonly, nonatomic) struct CKComponentSize { struct CKRelativeDimension { int _type; double _value; } width; struct CKRelativeDimension { int _type; double _value; } height; struct CKRelativeDimension { int _type; double _value; } minWidth; struct CKRelativeDimension { int _type; double _value; } minHeight; struct CKRelativeDimension { int _type; double _value; } maxWidth; struct CKRelativeDimension { int _type; double _value; } maxHeight; } size;

+ (id)initialState;
+ (id)new;
+ (id)newWithView:(const struct CKComponentViewConfiguration { struct shared_ptr<const CKComponentViewConfiguration::Repr> { struct Repr *x0; struct __shared_weak_count *x1; } x0; } *)a0 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1;

- (id)controller;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (struct CKComponentViewContext { id x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })viewContext;
- (void)dealloc;
- (id)nextResponder;
- (id).cxx_construct;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (const struct CKComponentViewConfiguration { struct shared_ptr<const CKComponentViewConfiguration::Repr> { struct Repr *x0; struct __shared_weak_count *x1; } x0; } *)viewConfiguration;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; })layoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parentSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateState:(id /* block */)a0 mode:(unsigned long long)a1;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 restrictedToSize:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1 relativeToParentSize:(struct CGSize { double x0; double x1; })a2;
- (id)viewForAnimation;
- (void)wf_applyVisualStying:(id)a0;
- (struct CKComponentBoundsAnimation { double x0; double x1; unsigned long long x2; unsigned long long x3; double x4; double x5; })boundsAnimationFromPreviousComponent:(id)a0;
- (id)initWithView:(const struct CKComponentViewConfiguration { struct shared_ptr<const CKComponentViewConfiguration::Repr> { struct Repr *x0; struct __shared_weak_count *x1; } x0; } *)a0 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1;
- (struct MountResult { BOOL x0; struct MountContext { struct shared_ptr<CK::Component::ViewManager> { struct ViewManager *x0; struct __shared_weak_count *x1; } x0; struct CGPoint { double x0; double x1; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; BOOL x3; } x1; })mountInContext:(const struct MountContext { struct shared_ptr<CK::Component::ViewManager> { struct ViewManager *x0; struct __shared_weak_count *x1; } x0; struct CGPoint { double x0; double x1; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; BOOL x3; } *)a0 size:(struct CGSize { double x0; double x1; })a1 children:(struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; })a2 supercomponent:(id)a3;
- (void)unmount;
- (void)_relinquishMountedView;
- (void)childrenDidMount;
- (struct vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> > { struct CKComponentAnimation *x0; struct CKComponentAnimation *x1; struct __compressed_pair<CKComponentAnimation *, std::__1::allocator<CKComponentAnimation> > { struct CKComponentAnimation *x0; } x2; })animationsOnInitialMount;
- (struct vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> > { struct CKComponentAnimation *x0; struct CKComponentAnimation *x1; struct __compressed_pair<CKComponentAnimation *, std::__1::allocator<CKComponentAnimation> > { struct CKComponentAnimation *x0; } x2; })animationsFromPreviousComponent:(id)a0;
- (id)nextResponderAfterController;

@end
