@class NSDictionary;

@interface VCPHomeResidentMaintenanceTask : NSObject <VCPMADTaskProtocol> {
    id /* block */ _completionHandler;
    NSDictionary *_options;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancel;
    int _taskID;
}

@property (copy, nonatomic) id /* block */ cancelBlock;

+ (id)taskWithOptions:(id)a0 andCompletionHandler:(id /* block */)a1;

- (BOOL)isCanceled;
- (int)run;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)autoCancellable;
- (id)initWithOptions:(id)a0 andCompletionHandler:(id /* block */)a1;
- (float)resourceRequirement;

@end
