@class SFService, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PKProximityAdvertiser : NSObject {
    SFService *_nearbyInfoSharingService;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_advertiserQueue;
}

@property (readonly, nonatomic) BOOL isAdvertising;

- (void)_queue_endAdvertising;
- (id /* block */)_createAdvertisingActivationBlockWithName:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)startAdvertisingForDuration:(double)a0 completion:(id /* block */)a1;
- (void)endAdvertising;
- (void)dealloc;

@end
