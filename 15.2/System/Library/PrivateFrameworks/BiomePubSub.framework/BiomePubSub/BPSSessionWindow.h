@class NSString, BPSSubscriptionStatus, NSDateInterval;

@interface BPSSessionWindow : BPSWindow {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BPSSubscriptionStatus *_status;
    NSString *_identifier;
    BOOL _downstreamRequested;
    id /* block */ _timestamp;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double gap;
@property (readonly, nonatomic) id accumulator;
@property (readonly, nonatomic) id /* block */ closure;

- (id)identifier;
- (id)metadata;
- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;
- (void)requestDemand:(long long)a0;
- (void)cancel;
- (long long)receiveInput:(id)a0;
- (id)initWithDateInterval:(id)a0 gap:(double)a1 timestamp:(id /* block */)a2 aggregator:(id)a3 identifier:(id)a4;

@end
