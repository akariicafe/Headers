@class NSString, NSDate;
@protocol BPSSubscriber;

@interface _BPSTimerInner : NSObject <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _getTimestamp;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSDate *nextIntervalBoundary;
@property (retain, nonatomic) NSDate *startTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (long long)receiveInput:(id)a0;
- (id)initWithDownstream:(id)a0 interval:(double)a1 getTimestamp:(id /* block */)a2;

@end
