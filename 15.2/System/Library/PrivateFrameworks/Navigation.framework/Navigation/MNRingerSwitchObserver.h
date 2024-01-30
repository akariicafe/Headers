@class NSObject;
@protocol OS_dispatch_queue;

@interface MNRingerSwitchObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int ringerStateNotifyToken;
@property (nonatomic) BOOL ringerSwitchEnabled;

+ (id)sharedObserver;

- (BOOL)fetchRingerSwitchEnabled;
- (void)loadPropertiesOnConcurrentQueue;
- (void)registerForRingerStateNotifications;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned long long)stateForNotifyToken:(int)a0;
- (void)unregisterForRingerStateNotifications;

@end
