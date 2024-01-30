@class NSHashTable, NSString, ANLocalPlaybackSession, AFNotifyObserver, AFInstanceContext, NSObject, AFHomeAnnouncementSnapshot, AFHomeAnnouncement;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFHomeAnnouncementObserver : NSObject <ANLocalPlaybackSessionDelegate, AFNotifyObserverDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    AFNotifyObserver *_notifyObserver;
    ANLocalPlaybackSession *_localPlaybackSession;
    long long _groupingDepth;
    NSObject<OS_dispatch_group> *_snapshotGroup;
    unsigned long long _state;
    AFHomeAnnouncement *_lastPlayedAnnouncement;
    AFHomeAnnouncementSnapshot *_snapshot;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addListener:(id)a0;
- (void)connectionInterrupted;
- (void)_setUp;
- (void)removeListener:(id)a0;
- (void)connectionInvalidated;
- (void)_tearDown;
- (id)initWithInstanceContext:(id)a0;
- (void)getStateWithCompletion:(id /* block */)a0;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (id)_localPlaybackSession:(BOOL)a0;
- (void)getSnapshotWithCompletion:(id /* block */)a0;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)_updateState:(unsigned long long)a0;
- (void)dealloc;
- (void)_updateLastPlayedAnnouncement:(id)a0;
- (void)_invalidateLocalPlaybackSession;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)_endGrouping;
- (void)_beginGrouping;
- (void)_updateSnapshot:(id)a0;
- (void)_fetchStateAndLastPlayedAnnouncementForReason:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)invalidate;
- (void)_handleNotifyStateChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void).cxx_destruct;

@end
