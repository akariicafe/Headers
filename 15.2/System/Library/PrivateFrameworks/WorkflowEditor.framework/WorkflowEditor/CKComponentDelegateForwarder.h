@class UIView;

@interface CKComponentDelegateForwarder : NSObject {
    struct vector<SEL *, std::allocator<SEL *>> { SEL *__begin_; SEL *__end_; struct __compressed_pair<SEL **, std::allocator<SEL *>> { SEL *__value_; } __end_cap_; } _selectors;
}

@property (weak, nonatomic) UIView *view;

+ (id)newWithSelectors:(struct vector<SEL *, std::allocator<SEL *>> { SEL *x0; SEL *x1; struct __compressed_pair<SEL **, std::allocator<SEL *>> { SEL *x0; } x2; })a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id).cxx_construct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_doNothing;

@end
