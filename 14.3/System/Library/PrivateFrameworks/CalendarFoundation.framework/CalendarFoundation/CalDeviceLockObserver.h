@class NSString, CalDarwinNotificationListener, NSObject;
@protocol OS_dispatch_queue;

@interface CalDeviceLockObserver : NSObject <CalDeviceLockObservable>

@property (class, readonly, nonatomic) NSString *stateChangedNotificationName;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) CalDarwinNotificationListener *notificationListener;
@property (copy, nonatomic) id /* block */ stateChangedCallback;
@property (nonatomic) BOOL internalHasBeenUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasBeenUnlockedSinceBoot;

@end
