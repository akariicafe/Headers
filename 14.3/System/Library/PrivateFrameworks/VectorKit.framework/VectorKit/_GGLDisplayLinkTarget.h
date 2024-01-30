@interface _GGLDisplayLinkTarget : NSObject {
    struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> { struct _RunLoopCallbacker *__ptr_; struct __shared_weak_count *__cntrl_; } _callbacker;
}

- (void).cxx_destruct;
- (id)initWithCallbacker:(struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> { struct _RunLoopCallbacker *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (void)displayLinkFired:(id)a0;

@end
