@interface RPBHost_Delegate : NSObject <RPBHostDelegate> {
    struct function<vp::Expected<std::vector<vp::rpb::Parameter_Info, vp::Allocator<vp::rpb::Parameter_Info>>, vp::rpb::Error> (vp::rpb::Scope)> { struct __value_func<vp::Expected<std::vector<vp::rpb::Parameter_Info, vp::Allocator<vp::rpb::Parameter_Info>>, vp::rpb::Error> (vp::rpb::Scope)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } get_parameter_info_callback;
    struct function<vp::Expected<float, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int)> { struct __value_func<vp::Expected<float, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } get_parameter_callback;
    struct function<vp::Expected<void, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int, float)> { struct __value_func<vp::Expected<void, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int, float)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } set_parameter_callback;
    struct function<vp::Expected<std::vector<vp::rpb::Property_Info, vp::Allocator<vp::rpb::Property_Info>>, vp::rpb::Error> (vp::rpb::Scope)> { struct __value_func<vp::Expected<std::vector<vp::rpb::Property_Info, vp::Allocator<vp::rpb::Property_Info>>, vp::rpb::Error> (vp::rpb::Scope)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } get_property_info_callback;
    struct function<vp::Expected<applesauce::CF::TypeRef, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int)> { struct __value_func<vp::Expected<applesauce::CF::TypeRef, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } get_property_callback;
    struct function<vp::Expected<void, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int, applesauce::CF::TypeRef)> { struct __value_func<vp::Expected<void, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int, applesauce::CF::TypeRef)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } set_property_callback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)getRemoteProcessingBlockPropertyInfo:(id)a0 forScope:(unsigned int)a1 object:(id)a2 withError:(id *)a3;
- (void)getRemoteProcessingBlockParameter:(float *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (void)getRemoteProcessingBlockParameterInfo:(id)a0 forScope:(unsigned int)a1 object:(id)a2 withError:(id *)a3;
- (void)getRemoteProcessingBlockProperty:(id *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (void)setRemoteProcessingBlockParameter:(float)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (void)setRemoteProcessingBlockProperty:(id)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;

@end
