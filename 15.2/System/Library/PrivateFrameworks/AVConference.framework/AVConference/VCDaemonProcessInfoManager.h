@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;

- (unsigned long long)retainCount;
- (id)retain;
- (id)copyProcessInfo;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (void)deregisterBlocksForService;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)registerBlocksForService;
- (void)dealloc;
- (oneway void)release;

@end
