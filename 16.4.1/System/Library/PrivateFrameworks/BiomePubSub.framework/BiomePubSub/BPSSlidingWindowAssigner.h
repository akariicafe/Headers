@class NSString, BPSAggregator;

@interface BPSSlidingWindowAssigner : NSObject <BPSWindowAssigner> {
    double _interval;
    double _slide;
    BPSAggregator *_aggregator;
    id /* block */ _timestamp;
    unsigned long long _identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)assignWindow:(id)a0 input:(id)a1;
- (id)assignWindowNonOverlappingIntervals:(id)a0 timestamp:(id)a1;
- (id)assignWindowOverlappingIntervals:(id)a0 timestamp:(id)a1;
- (id)initWithInterval:(double)a0 slide:(double)a1 aggregator:(id)a2;
- (id)initWithInterval:(double)a0 slide:(double)a1 timestamp:(id /* block */)a2 aggregator:(id)a3;

@end
