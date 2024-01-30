@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FigNSURLSessionRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_sessionArray;
}

- (void)copySessionAndAssertionForClientBundleIdentifier:(id)a0 clientPersonaIdentifier:(id)a1 dispatchQueue:(id)a2 outSession:(id *)a3 outAssertion:(struct FigOpaqueAssertion **)a4;
- (void)_checkForDoom:(id)a0;
- (void)dealloc;
- (void)releaseSession:(id)a0;
- (id)init;

@end
