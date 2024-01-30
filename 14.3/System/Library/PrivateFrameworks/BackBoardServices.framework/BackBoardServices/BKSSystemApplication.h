@class NSString, BKSSystemApplicationClient, NSObject;
@protocol OS_dispatch_queue, BKSSystemApplicationDelegate;

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BKSSystemApplicationClient *_client;
}

@property (weak, nonatomic) id<BKSSystemApplicationDelegate> delegate;
@property (nonatomic) BOOL waitForDataMigration;
@property (nonatomic) double systemIdleSleepInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)sendActions:(id)a0;
- (void)dealloc;
- (void)finishBooting;
- (BOOL)clientIsAliveForWatchdog:(id)a0;
- (void)start;
- (void)bootstrap;

@end
