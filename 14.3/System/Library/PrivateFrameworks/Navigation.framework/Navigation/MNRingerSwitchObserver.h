@class NSObject;
@protocol OS_dispatch_queue;

@interface MNRingerSwitchObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int ringerStateNotifyToken;
@property (nonatomic) BOOL ringerSwitchEnabled;

+ (id)sharedObserver;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)stateForNotifyToken:(int)a0;
- (void)loadPropertiesOnConcurrentQueue;
- (BOOL)fetchRingerSwitchEnabled;
- (void)unregisterForRingerStateNotifications;
- (void)registerForRingerStateNotifications;

@end
