@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TUNotifyObserver : NSObject <TUNotifyObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *notificationName;
@property (nonatomic) int token;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic, getter=isObserving) BOOL observing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginObserving;
- (void)dealloc;
- (void)_endObserving;
- (id)initWithNotificationName:(id)a0 queue:(id)a1;
- (void)endObserving;

@end
