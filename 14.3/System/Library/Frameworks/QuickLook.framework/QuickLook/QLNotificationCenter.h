@class NSString, NSPointerArray, NSMutableArray;
@protocol QLNotificationCenterProtocol;

@interface QLNotificationCenter : NSObject <QLNotificationCenterProtocol> {
    id<QLNotificationCenterProtocol> _remoteNotificationCenter;
    NSPointerArray *_observers;
    NSMutableArray *_bufferedNotifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)postNotificationName:(id)a0 userInfo:(id)a1;
- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_tryPostingNotificationName:(id)a0 userInfo:(id)a1;
- (void)_bufferNotificationName:(id)a0 userInfo:(id)a1;
- (void)_sendEnqueuedNotifications;
- (long long)_indexOfObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)setRemoteNotificationCenter:(id)a0;

@end
