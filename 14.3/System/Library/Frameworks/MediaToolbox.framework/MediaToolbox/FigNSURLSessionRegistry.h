@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FigNSURLSessionRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_sessionArray;
}

- (id)init;
- (void)dealloc;
- (void)_checkForDoom:(id)a0;
- (void)copySessionAndAssertionForClientBundleIdentifier:(id)a0 dispatchQueue:(id)a1 outSession:(id *)a2 outAssertion:(struct FigOpaqueAssertion **)a3;
- (void)releaseSession:(id)a0;

@end
