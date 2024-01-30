@class NSObject;
@protocol OS_dispatch_queue;

@interface MNRingerSwitchObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int ringerStateNotifyToken;
@property (nonatomic) BOOL ringerSwitchEnabled;

+ (id)sharedObserver;

- (BOOL)fetchRingerSwitchEnabled;
- (void)registerForRingerStateNotifications;
- (void)loadPropertiesOnConcurrentQueue;
- (unsigned long long)stateForNotifyToken:(int)a0;
- (void)dealloc;
- (void)unregisterForRingerStateNotifications;
- (id)init;
- (void).cxx_destruct;

@end
