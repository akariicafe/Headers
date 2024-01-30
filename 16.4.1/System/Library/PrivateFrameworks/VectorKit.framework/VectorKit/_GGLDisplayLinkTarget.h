@interface _GGLDisplayLinkTarget : NSObject {
    struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> { struct _RunLoopCallbacker *__ptr_; struct __shared_weak_count *__cntrl_; } _callbacker;
}

- (id).cxx_construct;
- (id)initWithCallbacker:(struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> { struct _RunLoopCallbacker *x0; struct __shared_weak_count *x1; })a0;
- (void)displayLinkFired:(id)a0;
- (void).cxx_destruct;

@end
