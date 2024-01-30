@class NSString, CLLocationManager, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ATXWidgetLocationAuthorizationTracker : NSObject <CLLocationManagerDelegate> {
    NSString *_containerBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_sem;
    CLLocationManager *_manager;
}

@property (retain) NSNumber *atomicNullableIsAuthorizedForWidgetUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
