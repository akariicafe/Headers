@class NSRecursiveLock, NSObject;
@protocol OS_dispatch_queue;

@interface IOUSBHostInterestNotifier : NSObject

@property (weak, nonatomic) NSObject *owner;
@property (nonatomic) BOOL destroyed;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct IONotificationPort { } *notificationPortRef;
@property (nonatomic) void /* function */ *callback;
@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int notifier;
@property (nonatomic) unsigned int matchingIterator;

- (void).cxx_destruct;
- (void)dealloc;
- (void)destroy;
- (id)initWithOwner:(id)a0 matchingDictionary:(id)a1 callback:(void /* function */ *)a2;
- (id)initWithOwner:(id)a0 callback:(void /* function */ *)a1;
- (id)initWithOwner:(id)a0 service:(unsigned int)a1 callback:(void /* function */ *)a2;

@end
