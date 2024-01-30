@class NSString, BPSAggregator;

@interface BPSTumblingWindowAssigner : NSObject <BPSWindowAssigner> {
    double _interval;
    BPSAggregator *_aggregator;
    id /* block */ _timestamp;
    unsigned long long _identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
