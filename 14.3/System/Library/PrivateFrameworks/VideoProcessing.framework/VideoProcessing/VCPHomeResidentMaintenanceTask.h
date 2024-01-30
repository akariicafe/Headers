@class NSDictionary;

@interface VCPHomeResidentMaintenanceTask : NSObject <VCPMADTaskProtocol> {
    id /* block */ _completionHandler;
    NSDictionary *_options;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _cancel;
    int _taskID;
}

@property (copy, nonatomic) id /* block */ cancelBlock;

+ (id)taskWithOptions:(id)a0 andCompletionHandler:(id /* block */)a1;

- (void)cancel;
- (int)run;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (void)dealloc;
- (float)resourceRequirement;
- (id)initWithOptions:(id)a0 andCompletionHandler:(id /* block */)a1;

@end
