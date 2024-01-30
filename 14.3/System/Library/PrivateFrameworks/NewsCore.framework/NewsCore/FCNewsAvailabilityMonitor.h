@class NSObject, NSMutableArray, LSApplicationProxy;
@protocol OS_dispatch_queue;

@interface FCNewsAvailabilityMonitor : NSObject

@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) LSApplicationProxy *applicationProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isNewsAvailable) BOOL NewsIsAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addNotificationBlock:(id /* block */)a0;
- (void)setNewsIsAvailable:(BOOL)a0;
- (void)_updateAvailability;
- (id)initWithProcessVariant:(unsigned long long)a0;
- (BOOL)_isNewsAvailable;
- (id)initWithApplicationProxy:(id)a0 queue:(id)a1;
- (id)initWithProcessVariant:(unsigned long long)a0 queue:(id)a1;

@end
