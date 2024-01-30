@class NSMutableArray, NSString, NSMutableOrderedSet, NSObject, ML3MusicLibrary;
@protocol OS_dispatch_queue;

@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_notificationObservers;
    NSMutableOrderedSet *_queuedLocalNotifications;
    NSMutableOrderedSet *_queuedDistributedNotificationNames;
}

@property (readonly, weak, nonatomic) ML3MusicLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enqueueDistributedNotificationNamed:(id)a0;
- (void)removeObserverWithDistributedName:(id)a0;
- (void).cxx_destruct;
- (id)_observerForDistributedName:(id)a0;
- (id)initWithLibrary:(id)a0 distributedAndLocalNames:(id)a1;
- (void)removeObserverWithLocalName:(id)a0;
- (void)_postEnqueuedLocalNotifications;
- (void)_postEnqueuedDistributedNotifications;
- (void)addObserverForDistributedName:(id)a0 localName:(id)a1;
- (id)_observerForLocalName:(id)a0;
- (void)enqueueLocalNotification:(id)a0;
- (void)enqueueLocalNotificationNamed:(id)a0;
- (BOOL)observerShouldForwardDistributedNotification:(id)a0;

@end
