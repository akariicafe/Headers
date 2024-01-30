@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)copyProcessInfo;
+ (id)sharedManager;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)copyProcessInfo;
- (oneway void)release;
- (void)registerBlocksForService;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)deregisterBlocksForService;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (unsigned long long)retainCount;

@end
