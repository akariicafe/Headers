@interface VCPMABaseTask : NSObject <VCPMADTaskProtocol> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _canceled;
}

@property (readonly, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)cancel;
- (int)run;
- (BOOL)isCanceled;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (float)resourceRequirement;
- (BOOL)run:(id *)a0;

@end
