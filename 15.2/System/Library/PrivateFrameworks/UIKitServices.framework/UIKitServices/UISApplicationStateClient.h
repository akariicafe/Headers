@class NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface UISApplicationStateClient : NSObject <BSInvalidatable> {
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_invalidated;
    BSServiceConnection *_queue_connection;
}

@property (copy, nonatomic) NSString *badgeValue;
@property (nonatomic) BOOL usesBackgroundNetwork;
@property (nonatomic) double nextWakeIntervalSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setMinimumBackgroundFetchInterval:(double)a0;
- (void)dealloc;
- (id)_remoteTarget;

@end
