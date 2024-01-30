@class NSObject;
@protocol OS_dispatch_group;

@interface _PFRequestExecutor : NSObject {
    NSObject<OS_dispatch_group> *_requestGroup;
}

- (id)init;
- (void)dealloc;
- (void)requestFinished;
- (BOOL)executeRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)wait;

@end
