@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCQoSMonitorManager : VCObject {
    NSMutableArray *_monitors;
    NSMutableDictionary *_sources;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    long long _reportingInterval;
}

@property (readonly, nonatomic) NSMutableArray *moitors;

+ (id)sharedInstance;

- (void)updateQoSReport:(id)a0 toClientsWithToken:(long long)a1;
- (id)init;
- (void)registerBlocksForService;
- (void)dealloc;
- (void)unregisterQoSReportingSourceForToken:(long long)a0;
- (void)deregisterBlocksForService;
- (BOOL)doesQoSSourceExistForStreamToken:(id)a0;
- (void)registerQoSReportingSourceForToken:(long long)a0;

@end
