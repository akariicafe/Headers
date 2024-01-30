@class FCNewsAvailabilityMonitor, NSString, NSObject, FCNetworkReachability;
@protocol OS_dispatch_queue;

@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>

@property (retain, nonatomic) FCNetworkReachability *networkReachability;
@property (retain, nonatomic) FCNewsAvailabilityMonitor *NewsAvailabilityMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) Class todayResultsFetchDescriptorClass;
@property (readonly, nonatomic, getter=isLikelyAvailable) BOOL likelyAvailable;
@property (copy, nonatomic) id /* block */ availabilityChangedNotificationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNetworkReachability:(id)a0 processVariant:(unsigned long long)a1 queue:(id)a2;
- (void)_updateAvailability;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_isAvailable;
- (BOOL)_isAvailableAssumingStoreFrontIsSupported:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
