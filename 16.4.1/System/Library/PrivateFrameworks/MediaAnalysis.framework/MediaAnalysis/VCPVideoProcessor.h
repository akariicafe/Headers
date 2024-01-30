@class NSURL, VCPVideoProcessorSession;

@interface VCPVideoProcessor : NSObject {
    NSURL *_url;
    VCPVideoProcessorSession *_session;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
}

@property (copy) id /* block */ progressHandler;

- (id)initWithURL:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withConfiguration:(id)a1 error:(id *)a2;
- (BOOL)analyzeWithStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (BOOL)removeRequest:(id)a0 error:(id *)a1;
- (BOOL)_analyzeWithStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;

@end
