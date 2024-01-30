@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)registerBlocksForService;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)deregisterBlocksForService;
- (id)copyProcessInfo;
- (id)retain;

@end
