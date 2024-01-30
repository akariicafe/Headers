@class NSString, BPSAggregator, NSDate;

@interface BPSSessionWindowAssigner : NSObject <BPSWindowAssigner> {
    double _gap;
    BPSAggregator *_aggregator;
    id /* block */ _timestamp;
    unsigned long long _identifier;
    NSDate *_lastTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
